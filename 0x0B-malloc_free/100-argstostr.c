#include "main.h"

/**
  * argstostr - concatenates all the arguments of your program.
  * @ac: Argument count
  * @av: Argument vector
  * Return: A pointer or NULL if failed
  */
char *argstostr(int ac, char **av)
{
	int i, j, len, k;
	char *ptr;

	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	ptr = (char *)malloc(sizeof(char ) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
