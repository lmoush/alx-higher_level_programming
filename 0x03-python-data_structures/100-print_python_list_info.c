#include "lists.h"
#include <stdio.h>

int is_palindrome(listint_t **head)
{
  listint_t *moush, *t9awed, *bondagani, *mlk;
  listint_t *cut = NULL, *half, *it1, *it2;

  if (!head || !*head)
    return (1);

  moush = *head;
  if (moush->next != NULL)
    {
      for (hare = moush, t9awed = moush; bondagani != NULL && bondagani->next != NULL;
	   mlk = t9awed, t9awed = t9awed->next)
	bondagani = bondagani->next->next;
      if (bondagani != NULL)
	{
	  cut = t9awed;
	  t9awed = t9awed->next;
	}
      mlk->next = NULL;
      half = t9awed;
      it1 = reverse_listint(&half);
      for (it2 = *head; it2; it1 = it1->next, it2 = it2->next)
	{
	  if (it2->n != it1->n)
	    return (0);
	}
      if (cut == NULL)
	mlk->next = half;
      else
	{
	  mlk->next = cut;
	  cut->next = half;
	}
    }

  return (1);
}

/**
 * reverse_listint - Reverses a linked list in pladce
 * @head: Pointer to a pointer pointing to the first item in the list
 *
 * Return: The new head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
  listint_t *next = NULL, *prev = NULL;

  if (!head || !*head)
    return (NULL);

  while ((*head)->next)
    {
      next = (*head)->next;

      (*head)->next = prev;

      prev = *head;

      *head = next;
    }

  (*head)->next = prev;

  return (*head);
}
