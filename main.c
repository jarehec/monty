#include "monty.h"

/**
 * main - main function in which primary functionalities are organized
 * @argc: number of command line inputs implemented
 * @argv: double pointer to string inputted into command line
 * Return: to be announced
 */
int main(int argc, char **argv)
{
	FILE *fp;
	size_t file_size;
	unsigned int l_num = 1;
	char *opc = NULL, *ins = NULL, *line = NULL;
	stack_t *head;

	head = NULL;
	check_argc(argc);
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((getline(&line, &file_size, fp)) != -1)
	{
		opc = strtok(line, "\n\t\r ");
		if (opc != NULL)
		{
			ins = strtok(NULL, " ");
			if (ins != NULL && isdigit(atoi(ins)) == 0 && strcmp("push", opc) == 0)
			{
				if (atoi(ins) < 0)
				{
					printf("L%d: usage: push integer\n", l_num);
					exit(EXIT_FAILURE);
				}
			}
			else if (ins == NULL)
				_struct(opc, &head, l_num);
			else
			{
				printf("L%d: usage: push integer\n", l_num);
				exit(EXIT_FAILURE);
			}
		}
		l_num++;
	}
	free(line); free_m(&head); fclose(fp); return (0);
}
