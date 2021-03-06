#include <stdio.h>
#include <stdlib.h>

/**
* main - print minimun coin change
* Return: 0 succes
* @argc: number of arguments
* @argv: array of arguments
**/
int main(int argc, char *argv[])
{
	int coin[] = {1, 2, 5, 10, 25};
	int change = 0, i = 0, money, sw = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		while (sw == 0)
		{
			for (i = 4; i >= 0; i--)/* recorro vector de monedas*/
			{
				if (money >= coin[i])/*money less than coin?*/
				{
					if (money % coin[i] == 0)/*money can be divided*/
					{
						change = change + money / coin[i];
						sw = 1;
						break;
					}
					else
					{
						change = change + money / coin[i];
						money = money % coin[i];
						break;
					}
				}
			}
		}
	}
	printf("%d\n", change);
	return (0);
}
