#include "lists.h"

/**
* get_nodeint_at_index - This returns node at a certain index in a linked list
* @head: The first node in the linked list
* @index: The index of the node to return
* Return: A pointer to the node we are looking for or null
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
