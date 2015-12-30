/*
** my_sort_int_tab.c for my_sort_int_tab.c in /home/afou_n/Github/Piscine/Piscine_C_J04
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sun Dec 27 19:00:48 2015 Afou Nacerdine
** Last update Tue Dec 29 16:52:03 2015 Afou Nacerdine
*/

#include "my.h"

void	swap(int *tab, int index1, int index2)
{
  int	save;

  save = tab[index1];
  tab[index1] = tab[index2];
  tab[index2] = save;
}

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	j;

  i = 0;
  while (i < size)
    {
      j = 0;
      while (j < size)
	{
	  if (tab[j - 1] > tab[j])
	    swap(tab, j - 1, j);
	  j = j + 1;
	}
      i = i + 1;
    }
}
