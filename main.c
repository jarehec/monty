#include "monty.h"

/**
 * main - main function in which primary functionalities are organized
 * @argc: number of command line inputs implemented
 * @argv: double pointer to string inputted into command line
 * Return: to be announced
 */
int main(int argc, char **argv)
{
/*	stack_t *head; */
	FILE *fp;
	int closer, counter, i;
	char str[10];
/*	char *string; */

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit (EXIT_FAILURE);
	}
/*	head = NULL; */
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("USAGE: monty file\n");
		exit (EXIT_FAILURE);
	}
/*	line = NULL; */
	
	while (fgets(str, 10, fp) != NULL)
	{
/*		read_line = getline(&line, &page_size, fp); */
		/* tokenize here */
		i = 0;
		for ( ; str[i] == ' ' && str[i]; i++)  
		{
			if (str[i] != ' ')
			{
				counter++;
				/*	flag = 0; */
			}
			else
			{
				/* flag = 1; */
			}
		}
/*		string = malloc(counter * sizeof(char)); */
		printf("%s", str);
	}
	closer = fclose(fp);
	if (closer == -1)
	{
		return (-1);
	}
	return (1);
}
