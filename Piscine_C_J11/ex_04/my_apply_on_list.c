/*
** my_apply_on_list.c for my_apply_on_list.c in /home/afou_n/Github/Piscine/Piscine_C_J11
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Wed Dec 30 23:19:25 2015 Afou Nacerdine
** Last update Wed Dec 30 23:21:52 2015 Afou Nacerdine
*/

#include <stdlib.h>
#include "../include/mylist.h"
#include "../include/my.h"

int		my_apply_on_list(t_list *begin, int (*f)(void*))
{
  t_list	*tmp;

  tmp = begin;
  while (tmp != NULL)
    {
      f(tmp->data);
      tmp = tmp->next;
    }
}
