#include "main.h"

/**
 * read_textfile - read a text file and print it tothe standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed. Incase of error
 * return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t read_bytes;
	ssize_t written_bytes;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY); /* open file for reading */
	if (file_descriptor == -1) /* check if file opening failed */
		return (0);

	buffer = malloc(sizeof(char) * letters); /* allocate mem for the buffer */
	if (buffer == NULL) /* check if malloc failed */
	{
		close(file_descriptor);
		return (0);
	}

	read_bytes = read(file_descriptor, buffer, letters); /* read from the file */
	if (read_bytes <= 0) /* check if reading failed */
	{
		close(file_descriptor);
		free(buffer);
		return (0);
	}

	/* write to stdout */
	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	close(file_descriptor);
	free(buffer);

	if (written_bytes != read_bytes) /* check if writing didn't work */
		return (0);

	return (written_bytes); /* return number of bytes written */
}
