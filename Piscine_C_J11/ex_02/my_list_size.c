/*
** my_list_size.c for my_list_size.c in /home/afou_n/Github/Piscine/Piscine_C_J11
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Wed Dec 30 19:40:36 2015 Afou Nacerdine
** Last update Wed Dec 30 19:42:34 2015 Afou Nacerdine
*/

#include <stdlib.h>
#include "../include/mylist.h"
#include "../include/my.h"

int		my_list_size(t_list *begin)
{
  t_list	*tmp;
  int		i;

  tmp = begin;
  i = 0;
  while (tmp != NULL)
    {
      i = i + 1;
      tmp = tmp->next;
    }
  return (i);
}
