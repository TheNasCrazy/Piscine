/*
** my_rev_list.c for my_rev_list.c in /home/afou_n/Github/Piscine/Piscine_C_J11
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Wed Dec 30 22:55:08 2015 Afou Nacerdine
** Last update Wed Dec 30 23:13:32 2015 Afou Nacerdine
*/

#include <stdlib.h>
#include "../include/mylist.h"
#include "../include/mylist.h"

int		my_rev_list(t_list **begin)
{
  t_list	*tmp;
  t_list	*next;
  t_list	*prev;

  prev = NULL;
  tmp = *begin;
  while ((*begin) != NULL)
    {
      next = (*begin)->next;
      (*begin)->next = prev;
      prev = tmp;
      tmp = next;
      *begin = next;
    }
  *begin = prev;
  return (0);
}
