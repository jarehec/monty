#include "monty.h"

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
 * push_m - push node onto stack
 * @head: head node
 * @n: integer data inside of node
 * Return: returns the newly created node that is added to end of stack
 */

/*
stack_t *push_m(stack_t **head, int n)
{
	stack_t *new_node = NULL;
	stack_t *pointer = *head;

	new_node = malloc(sizeof(stack_t));
	if (head == NULL || new_node == NULL)
	{
		printf("testagain\n");
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head)
	{
		while ((*head)->next)
		{
			(*head) = (*head)->next;
		}
		(*head)->next = new_node;
		new_node->prev = (*head);
		*head = pointer;
	}
	else
	{
		*head = new_node;
	}
	printf("test3\n");
	return (new_node);

	} */

/**
* pall - Prints all elements on the stack
* @h: pointer to head of the stack list
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
 */
void pint(stack_t **h, unsigned int l_num)
{
	if (h)
		printf("%d\n", (*h)->n);
	else if (h == NULL)
	{
		puts("L1: can't pint, stack empty");
		exit (EXIT_FAILURE);
	}
	l_num++;
}

/**
 * pop - Removes th e top element of the stack
 * @h: pointer to head of the stack list
 */


void pop(stack_t **h, unsigned int l_num)
{
	stack_t *top = *h;

	if (*h == NULL)
	{
		puts("L1: can't pop an empty stack");
		exit (EXIT_FAILURE);
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
 */
void nop(void)
{
}
