#include "monty.h"

int _struct(char *str, stack_t **head, unsigned int l_num)
{
	instruction_t inst[] = {
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{NULL, NULL}
	};
	
	
	int i;
	i = 0;

	while (i < 3)
	{
		if (_strcmp(str, inst[i].opcode) == 0)
		{
			(inst[i].f)(head, l_num);
		}
		i++;
	}
	return (-1);
}
