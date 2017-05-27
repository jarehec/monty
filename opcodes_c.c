#include "monty.h"

/**
 * mod - Computes the mod of first two nodes on the stack, removes first node
 * @h: Pointer to the top of the stack
 * @l_num: line count
 */
void mod(stack_t **h, unsigned int l_num)
{
	stack_t *temp = *h;

	if (*h == NULL || (*h)->next == NULL)
	{
		printf("L%d: can't sub, stack too short\n", l_num);
		exit(EXIT_FAILURE);
	}
	if (temp->n == 0)
	{
		printf("L%d: division by zero\n", l_num);
		exit(EXIT_FAILURE);
	}
	temp->next->n %= temp->n;
	temp->next->prev = NULL;
	*h = temp->next;
	free(temp);
}

