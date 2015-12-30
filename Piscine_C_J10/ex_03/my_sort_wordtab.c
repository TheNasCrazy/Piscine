/*
** my_sort_wordtab.c for my_sort_wordtab.c in /home/afou_n/Github/Piscine/Piscine_C_J10
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Wed Dec 30 15:28:13 2015 Afou Nacerdine
** Last update Wed Dec 30 15:59:11 2015 Afou Nacerdine
*/

#include <stdlib.h>
#include "../include/my.h"

int	swap_tab(char **tab, int index1, int index2)
{
  char	*save;

  save = tab[index1];
  tab[index1] = tab[index2];
  tab[index2] = save;
}

int	my_sort_wordtab(char **tab)
{
  int	i;
  int	j;

  j = 0;
  while (tab[j] != NULL)
    {
      i = 0;
      while (tab[i] != NULL)
	{
	  if (my_strcmp(tab[i], tab[j]) > 0)
	    swap_tab(tab, i, j);
	  i = i + 1;
	}
      j = j + 1;
    }
  return (0);
}
