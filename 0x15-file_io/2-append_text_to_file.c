#include "main.h"

/**
 * append_text_to_file - append text to the end of a file
 * @filename: the name of the file to append to
 * @text_content: the text content to add to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor = -1; /* initialize file descriptor to -1 */
	ssize_t length_of_text;
	ssize_t written_bytes;

	if (filename == NULL)
		return (-1); /* if filename is NULL, return -1 */

	if (text_content == NULL)
		return (1); /* if text_content is NULL, do nothing and return 1*/

	/* open file for writing in append mode, rw------- */
	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1); /* if file opening fails, return -1 */

	length_of_text = strlen(text_content);
	written_bytes = write(file_descriptor, text_content, length_of_text);

	if (written_bytes != length_of_text)
	{
		close(file_descriptor);
		return (-1); /* if write fails, return -1 */
	}

	close(file_descriptor); /* close the file */
	return (1); /* return 1 for success */
}
