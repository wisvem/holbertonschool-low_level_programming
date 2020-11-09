#include "holberton.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: the name of the file
* @text_content: is the NULL terminated string to add at the end of the file
* Return: 1 on success and -1 on failure
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d = 0, write_r = 0, text_size = 0;
/*	int file_size = 0;
*	char *buff;
*/

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_RDWR | O_APPEND, 0600);
	if (file_d == -1)
		return (-1);
/*
*	for (c = getc(file_d); c != EOF; c = getc(file_d))
*	{
*		file_size++;
*	}
*/
	if (text_content != NULL)
	{
		while (text_content[text_size] != '\0')
			text_size++;
		write_r = write(file_d, text_content, text_size);
		close(file_d);
	}
	if (write_r < 0)
		return (0);
	close(file_d);
	return (1);
}
