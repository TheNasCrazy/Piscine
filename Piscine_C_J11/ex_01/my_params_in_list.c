/*
** my_params_in_list.c for my_params_in_list.c in /home/afou_n/Github/Piscine/Piscine_C_J11
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Wed Dec 30 17:14:05 2015 Afou Nacerdine
** Last update Wed Dec 30 17:33:32 2015 Afou Nacerdine
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/mylist.h"

t_list		*add_begin(t_list *list, void *data)
{
  t_list	*new_elem;

  if ((new_elem = malloc(sizeof(t_list))) == NULL)
    return (NULL);
  new_elem->data = data;
  new_elem->next = list;
  return (new_elem);
}

t_list		*my_params_in_list(int ac, char **av)
{
  t_list	*list;
  int		i;

  i = 0;
  list = NULL;
  while (i < ac)
    {
      list = add_begin(list, av[i]);
      i = i + 1;
    }
  return (list);
}
