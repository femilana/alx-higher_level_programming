#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
*add_nodeint - function adds a new node at the
beginning of a listint_t list
*@head: the head of listint_t
*@n: integer to add in listint_t list
*Return: address, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

/**
*is_palindrome - function identifies if a syngle linked list is
palindrome
*@head: the head of listint_t
*Return: 1 if it is palindrome, else 0
*/

int is_palindrome(listint_t **head)
{
	listint_t *head_2 = *head;
	listint_t *aux = NULL, *aux2 = NULL;

	if (*head == NULL || head_2->next == NULL)
		return (1);
	while (head_2 != NULL)
	{
		add_nodeint(&aux, head_2->n);
		head_2 = head_2->next;
	}
	aux2 = aux;
	while (*head != NULL)
	{
		if ((*head)->n != aux2->n)
		{
			free_listint(aux);
			return (0);
		}
		*head = (*head)->next;
		aux2 = aux2->next;
	}
	free_listint(aux);
	return (1);
}
