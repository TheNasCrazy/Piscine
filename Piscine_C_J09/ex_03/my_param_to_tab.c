/*
** my_param_to_tab.c for my_param_to_tab.c in /home/afou_n/Github/Piscine/Piscine_C_J09
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Tue Dec 29 15:17:48 2015 Afou Nacerdine
** Last update Tue Dec 29 15:53:14 2015 Afou Nacerdine
*/

#include <stdlib.h>
#include <string.h>
#include "../include/my.h"

struct s_stock_par	*my_param_to_tab(int ac, char **av)
{
  struct s_stock_par	*mv;
  int			i;

  i = 0;
  if ((mv = malloc(sizeof(struct s_stock_par) * (ac + 1))) == NULL)
    return (NULL);
  while (i < ac)
    {
      mv[i].size_param = my_strlen(av[i]);
      mv[i].str = av[i];
      mv[i].copy = my_strdup(av[i]);
      mv[i].tab = my_str_to_wordtab(av[i]);
      i = i + 1;
    }
  mv[ac].str = '\0';
  return (mv);
}
