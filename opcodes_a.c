#include "monty.h"



/**
 * push - creates a linked list which holds an integer data type
 * @head: head of linked list
 * @n: data type inside of node of type integer
 * Return: returns the newly created node and adds to list
 */
stack_t *push(stack_t **head, int n)
{
	int temp = n;
	stack_t *new_node = malloc(sizeof(stack_t *));

	if (head == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = temp;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}



/**
 * pall - Prints all elements on the stack
 * @h: pointer to head of the stack list
 * @line_n: line number of .m file
 * Return: number of nodes
 */
void pall(stack_t **h, unsigned int line_n)
{
	unsigned int i;
	stack_t *temp;

	i = line_n;

	temp = *h;
	if (*h)
	{
		while (*h)
		{
			printf("%d\n", (*h)->n);
			*h = (*h)->next;
			i++;
		}
	}
	*h = temp;
}


/**
 * pint - Prints the value at the top of the stack
 * @h: pointer to head of the stack list
 * @l_num: line number of .m file
 * Return: void
 */
void pint(stack_t **h, unsigned int l_num)
{
	if (h)
		printf("%d\n", (*h)->n);
	else if (h == NULL)
	{
		puts("L1: can't pint, stack empty");
		exit(EXIT_FAILURE);
	}
	l_num++;
}


/**
 * pop - Removes th e top element of the stack
 * @h: pointer to head of the stack list
 * @l_num: line number of .m file
 * Return: void
 */
void pop(stack_t **h, unsigned int l_num)
{
	stack_t *top = *h;

	if (*h == NULL)
	{
		puts("L1: can't pop an empty stack");
		exit(EXIT_FAILURE);
	}
	printf("test 1\n");
	if (top->next)
		top->next->prev = NULL;
	*h = top->next;
	l_num++;
	free(top);
}

/**
 * nop - Does nothing
 * Return: void
 */
void nop(void)
{
}
