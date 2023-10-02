#include "main.h"

#define BUFFER_SIZE 1024

/**
 * exit_error - prints an error message to stderr and exit with a given
 * exit code
 * @code_exit: the exit code
 * @format: the format string for the error message
 */
void exit_error(int code_exit, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(code_exit);
}

/**
 * main - copy the content of one file to another
 * @argc: the number of command-line arguments
 * @argv: the array of command-line arguments
 *
 * Return: 0 on success, or the appropriate exit code on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t read_bytes, written_bytes;
	char buffer[BUFFER_SIZE];
	/* check if the correct number of command-line arguments is provided */
	if (argc != 3)
		exit_error(97, "Usage: cp file_from file_to\n");

	file_from = open(argv[1], O_RDONLY); /*open the source file for reading */
	if (file_from == -1)
		exit_error(98, "Error: Can't read from file %s\n", argv[1]);
	/* open the destination file for writing */
	/* (create if not exists, truncate if exists) */
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		exit_error(99, "Error: Can't write to file %s\n", argv[2]);
	/* copy data from source file to destination file */
	while ((read_bytes = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		written_bytes = write(file_to, buffer, read_bytes);
		if (written_bytes != read_bytes)
			exit_error(99, "Error: Can't write to file %s\n", argv[2]);
	}
	/* handle errors related to reading from the source file */
	if (read_bytes == -1)
		exit_error(98, "Error: Can't read from file %s\n", argv[1]);
	/* close both files and handle any errors */
	if (close(file_from) == -1)
		exit_error(100, "Error: Can't close fd %d\n", file_from);

	if (close(file_to) == -1)
		exit_error(100, "Error: Can't close fd %d\n", file_to);

	return (0);
}
