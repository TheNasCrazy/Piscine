/*
** my_show_tab.c for my_show_tab.c in /home/afou_n/Github/Piscine/Piscine_C_J09
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Tue Dec 29 15:38:47 2015 Afou Nacerdine
** Last update Tue Dec 29 15:50:26 2015 Afou Nacerdine
*/

#include <stdlib.h>
#include "../include/my.h"

int	my_show_tab(struct s_stock_par *par)
{
  int	i;

  i = 0;
  if (par == NULL)
    return (-1);
  while (par[i].str != '\0')
    {
      my_putstr(par[i].copy);
      my_putchar('\n');
      my_put_nbr(par[i].size_param);
      my_putchar('\n');
      my_show_wordtab(par[i].tab);
      my_putchar('\n');
      i = i + 1;
    }
  return (0);
}
