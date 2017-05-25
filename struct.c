#include "monty.h"

stack_t *_struct(char *str, int p_num)
{
	stack_t *head;
	head = NULL;

	instruction_t inst[] = {
		{"pall", pall},
		{NULL, NULL}
	};
	
	int i;

	i = 0;

	
	if (strcmp(str, "push") == 0)
	{
		printf("test\n");
		push(&head, p_num);
		
	}

	while (i < 3)
	{
		i++;
	}
	return (head);
}
