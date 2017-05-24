#include "monty.h"

/**
 * check_argc - Checks if the correct number of arguments is correctw
 * @ac: argument count
 */
void check_argc(int ac)
{
	if (ac != 2)
	{
		printf("USAGE: monty file\n");
		exit (EXIT_FAILURE);
	}
}
