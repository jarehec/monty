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
	int counter, ins = 0, i;
	char str[40], *opc, *temp;
	stack_t *head = NULL;
	
	check_argc(argc);
	fp = fopen(argv[1], "r");
	if (fp== NULL)
	{
		printf("Error: can't open file %s\n", argv[1]);
		exit (EXIT_FAILURE);
	}
	while (fgets(str, 40, fp) != NULL)
	{
		opc = strtok(str, " ");
		if (opc != NULL)
		{
			temp = strtok(NULL, " ");
			if (temp)
				ins = atoi(temp);
		}	
		printf("%s ", opc);
		printf("%d\n", ins);
	}
	if (fclose(fp) != 0)
	{
		return (-1);
	}
	return (1);
}
