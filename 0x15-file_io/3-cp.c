#include "holberton.h"

/**
* main - entry point cp file to another file
* @argc: number of arguments
* @argv: arguments file to and file from
* Return: 0 for success
**/
int main(int argc, char *argv[])
{
	char *file_from_name, *file_to_name, buff[1024];
	int file_d, file_s, read_r, write_r;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from_name file_to_name");
		exit(97);
	}
	file_from_name = argv[1];
	file_to_name =  argv[2];

	file_d = open(file_to_name, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (file_d == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Can't write to ", file_to_name);
		exit(99);
	}

	file_s = open(file_from_name, O_RDONLY | 0600);
	read_r = read(file_s, buff, 1024);
	if (file_s == -1 || read_r == -1)
	{
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't read from file ", file_from_name);
		exit(98);
	}


	while (read_r != 0)
	{
		write_r = write(file_d, buff, read_r);
		if (write_r == -1)
		{
			dprintf(STDERR_FILENO, "%s%s\n", "Can't write to ", file_to_name);
			exit(99);
		}
		read_r = write(file_d, buff, read_r);
		if (read_r == -1)
		{
			dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't read from file ", file_from_name);
			exit(98);
		}
	}

	if (close(file_d) == -1)
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't close ", file_to_name);
	if (close(file_s) == -1)
		dprintf(STDERR_FILENO, "%s%s\n", "Error: Can't close ", file_from_name);
	return (0);
}
