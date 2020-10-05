/**
* _strchr - locate a character in  a string
* @s: source string
* @c: character
* Return: return a pointer to the first ocur
**/
char *_strchr(char *s, char c)
{
	int i = 0;
	char *p = '\0';

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = s + i;
			break;
		}
		i++;
	}
	return (p);
}
