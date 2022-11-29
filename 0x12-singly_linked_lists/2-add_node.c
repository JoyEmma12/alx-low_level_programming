#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Adds node at the beginning of a list
  * @head: the linked list
  * @str: the string to add to the node
  *
  * Return: the address of the new list or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}

	return (0);
}
