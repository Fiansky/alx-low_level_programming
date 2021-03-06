#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth nodde of a linked list
 * @head: pointer to struct
 * @index: intger used
 * Return: always success
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	count = 0;
	while (head != NULL)
	{
		if (index == count)
		{
			tmp = head;
			return (tmp);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
