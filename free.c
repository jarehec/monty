#include "monty.h"

/**
 * free_listint - free all nodes
 * @head: head node
 * Return: void
 */
void free_m(stack_t *head)
{

	stack_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
