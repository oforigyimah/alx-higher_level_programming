#include "lists.h"
#include <stdlib.h>

/**
 * check_cycle - prints all elements of a listint_t list
 * @h: pointer to head of list
 * Return: 0 if there no cycle else 1
 */

int check_cycle(listint_t *list)
{
		int i, k;
		listint_t **nodes;
		listint_t *current;
		
		current = list;
		i = 0;

		nodes = malloc(sizeof(listint_t) * 1023);
		while (current != NULL)
			{
			nodes[i] = current;
			current = current->next;
			for (k = 0; k <= i; k++)
				{
				if (nodes[k] == current)
					return (1);
				}
			i++;
			}
		return (0);
}
