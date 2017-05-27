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
	size_t file_size; int ins = 0, len;
	unsigned int l_num;
	char *opc, *temp, *line = NULL; stack_t *head; ssize_t read;

	head = NULL;
	check_argc(argc);
	fp = fopen(argv[1], "r");
	l_num = 0;
	if (fp == NULL)
	{
		printf("Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &file_size, fp)) != -1)
	{
		l_num++;
		opc = strtok(line, " ");
		len = strlen(opc);
		if (opc[len - 1] == '\n')
		{
			opc[len - 1] = '\0';
		}
		if (opc != NULL)
		{
			temp = strtok(NULL, " ");
			if (temp)
			{
				ins = atoi(temp);
			}
		}
		if (strcmp("push", opc) == 0)
			push(&head, ins);
		else
			_struct(opc, &head, l_num);
	}
	free(line);
	free_m(&head);
	fclose(fp);
	return (1);
}
