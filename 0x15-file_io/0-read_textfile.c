#include "holberton.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: text file to be read
* @letters: number of letters it should read and print
* Return: the actual number of letters it could read and print
* 0, if the file can not be opened or read, if filename is NULL
* if write fails or does not write the expected amount of bytes
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d = 0, read_r, write_r;
	char *buff = malloc(sizeof(char) * letters);

	if (buff == NULL || filename == NULL || letters == 0)
		return (file_d);

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);

	read_r = read(file_d, buff, letters);
	if (read_r < 0)
		return (0);

	write_r = write(STDOUT_FILENO, buff, read_r);
	if (write_r < 0)
		return (0);

	return (read_r);
}
