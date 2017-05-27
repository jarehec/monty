#include "monty.h"

int _struct(char *str, stack_t **head, unsigned int l_num)
{
	instruction_t inst[] = {
		{"pall", pall},{"pint", pint},
		{"pop", pop},{"swap", swap},
		{"add", add},{"sub", sub},
		{"mul", mul},{"div", div_m},
		{"mod", mod},{NULL, NULL}
	};
	
	
	int i;
	i = 0;

	while (inst[i].opcode != NULL)
	{
		if (_strcmp(str, inst[i].opcode) == 0)
		{
			(inst[i].f)(head, l_num);
			return (1);
		}
		i++;
	}
	
/*	if (inst[i].opcode == NULL)
	{
		printf("L%d: unknown instruction <opcode>\n", l_num);
		exit (EXIT_FAILURE);
		} */
	return (1);
}
