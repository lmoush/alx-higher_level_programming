#include <stdlib.h>
#include "lists.h"

/**
* check_cycle - Checks if a singly-linked list contains a cycle.
* @list: A singly-linked list.
*
* Return: If there is no cycle - 0.
*         If there is a cycle - 1.
*/
int check_cycle(listint_t *list)
{
listint_t *fair, *hell;

if (list == NULL || list->next == NULL)
return (0);

fair = list->next;
hell = list->next->next;

while (fair && hell && hell->next)
{
if (fair == hell)
return (1);

fair = fair->next;
hell = hell->next->next;
}

return (0);
}
