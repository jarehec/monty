#include "monty.h"

/**
 * push_m - push node onto stack
 * @head: head node
 * @n: integer data inside of node
 * Return: returns the newly created node that is added to end of stack
 */
stack_t *push_m(stack_t **head, int n)
{
	int temp = n;
	stack_t *new_node;
	stack_t *head_node;
	
	head_node = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = temp;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head == new_node;
		return (new_node);
	}
	else
	{
		while (head_node->next != NULL)
		{
			head_node->prev = new_node;
			head_node = head_node->next;
		}
		head_node->next = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	return (NULL);

}
/**
* pall - Prints all elements on the stack
* @h: pointer to head of the stack list
* Return: number of nodes
*/
void pall(const stack_t *h)
{
	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;	
		}
	}
}

/**
 * pint - Prints the value at the top of the stack
 * @h: pointer to head of the stack list
 */
void pint(const stack_t *h)
{
	if (h)
		printf("%d\n", h->n);
	else if (h == NULL)
	{
		puts("L1: can't pint, stack empty");
		exit (EXIT_FAILURE);
	}
}

/**
 * pop - Removes th e top element of the stack
 * @h: pointer to head of the stack list
 */
void pop(const stack_t **h)
{
	stack_t *top = *h;

	if (*h == NULL)
	{
		puts("L1: can't pop an empty stack")
		exit (EXIT_FAILURE);
	}
	if (top->next)
		top->next->prev = NULL;
	*h = top->next
	free(top);
}

/**
 * nop - Does nothing
 */
void nop(void)
{
}
