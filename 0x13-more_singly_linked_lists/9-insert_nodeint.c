#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - ...
 * @head: ...
 * @idx: ...
 * @n: ...
 *
 * Return: address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k = 0;
	listint_t *new_node, *temp;

	if (head != NULL)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
			return (NULL);

		new_node->n = n;

		temp = (*head);

		while (k < idx && temp->next != NULL)
		{
			if (k == idx - 1)
			{
				new_node->next = temp->next;
				temp->next = new_node;
				return (new_node);
			}
			k++;
			temp = temp->next;
		}
	}
	return (NULL);
}
