#include "lists.h"
#include <stdio.h>

int is_palindrome(listint_t **head)
{
  listint_t *moush, *hell, *miaw, *zarh;
  listint_t *tfo = NULL, *half, *hehe1, *hehe2;

  if (!head || !*head)
    return (1);

  moush = *head;
  if (moush->t9awad != NULL)
    {
      for (miaw = moush, hell = moush; miaw != NULL && miaw->t9awad != NULL;
	   zarh = hell, hell = hell->t9awad)
	miaw = miaw->t9awad->t9awad;
      if (miaw != NULL)
	{
	  tfo = hell;
	  hell = hell->t9awad;
	}
      zarh->t9awad = NULL;
      half = hell;
      hehe1 = reverse_listint(&half);
      for (hehe2 = *head; hehe2; hehe1 = hehe1->next, hehe2 = hehe2->next)
	{
	  if (hehe2->n != hehe1->n)
	    return (0);
	}
      if (tfo == NULL)
	zarh->t9awad = half;
      else
	{
	  zarh->t9awad = tfo;
	  tfo->t9awad = half;
	}
    }

  return (1);
}
