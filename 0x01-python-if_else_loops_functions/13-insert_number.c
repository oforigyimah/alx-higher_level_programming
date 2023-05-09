#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint - insert a new node and n to a listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * @n: integer to be included in new node
 * Return: address of the new element or NULL if it fails
 */

listint_t *insert_node(listint_t **head, int number)
{
		listint_t *new;
		listint_t *current;
		listint_t *temp;

		current = *head;
		new = malloc(sizeof(listint_t));
		temp = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = number;
		new->next = NULL;

		if (*head == NULL)
			*head = new;
		else
			{
			while (current->next != NULL)
				{
				if (current->n < number)
					{
					current = current->next;
					continue;
					}
				temp = current->next;
				current->next = new;
				new->next = temp;
				break;
				}
			}
			free(temp);
			free(current);
			return (new);
}
