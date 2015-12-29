/*
** my_show_wordtab.c for my_show_wordtab.c in /home/afou_n/Github/Piscine/Piscine_C_J08
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Tue Dec 29 11:41:04 2015 Afou Nacerdine
** Last update Tue Dec 29 14:55:14 2015 Afou Nacerdine
*/

#include <stdlib.h>

int	my_show_wordtab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i] != NULL)
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i = i + 1;
    }
}
