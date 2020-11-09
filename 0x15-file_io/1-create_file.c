#include "holberton.h"

/**
* create_file - creates a file
* @filename: name of the file to create
* @text_content: NULL terminated string to write to the file
* Return: 1 on success, -1 on failure (file can not be created,
* file can not be written, write “fails”, etc…)
* if filename is NULL return -1
* if text_content is NULL create an empty file
* The created file must have those permissions: rw-------.
* If the file already exists, do not change the permissions.
* if the file already exists, truncate it.
**/
int create_file(const char *filename, char *text_content)
{
	int file_d = 0, write_r = 0, text_size = 0;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY, O_CREAT, O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_size] != '\0')
			text_size++;
		write_r = write(file_D, text_content, text_size);
	}
	if (write_r < 0)
		return (-1);

	return (1);
}
