#include "main.h"

/**
 * create_file - creates a file with specified permissions and write
 * content to it
 * @filename: the name of the file to create
 * @text_content: the text content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor = -1; /* initialize file descriptor to -1 */
	ssize_t length_of_text;
	ssize_t written_bytes;
	int result = 1; /* initialize result to 1 (success) */

	if (filename == NULL)
		return (-1); /* if filename is NULL, return -1 */

	/* Open the file for writing with permissions rw------- */
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_descriptor == -1)
		return (-1); /* if file opening fails, return -1 */

	if (text_content != NULL)
	{
		length_of_text = strlen(text_content);
		written_bytes = write(file_descriptor, text_content, length_of_text);

		if (written_bytes != length_of_text)
			/* if write fails, set result to -1 */
			result = -1;
	}

	close(file_descriptor); /* close the file */
	return (result); /*return result (1 for success, -1 for failure) */
}
