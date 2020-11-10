#include "holberton.h"

/**
* main - entry point cp file to another file
* @argc: number of arguments
* @argv: arguments file to and file from
* Return: 0 for success
**/
int main(int argc, char *argv[])
{
	char *from_name, *to_name, buff[1024];
	int file_d, file_s, read_r, write_r;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp from_name to_name\n"), exit(97);
	}
	from_name = argv[1];
	to_name =  argv[2];
	file_d = open(to_name, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (file_d == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", to_name), exit(99);
	}
	file_s = open(from_name, O_RDONLY | 0600);
	read_r = read(file_s, buff, 1024);
	if (file_s == -1 || read_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_name),
			exit(98);
	}
	while (read_r > 0)
	{
		write_r = write(file_d, buff, read_r);
		if (write_r == -1)
		{
			dprintf(STDERR_FILENO, "Can't write to %s\n", to_name), exit(99);
		}
		read_r = write(file_s, buff, read_r);
		if (read_r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_name),
				exit(98);
		}
	}
	if (close(file_d) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close %s\n", to_name);
	if (close(file_s) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close %s\n", from_name);
	return (0);
}
