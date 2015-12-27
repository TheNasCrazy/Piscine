/*
** my_revstr.c for my_revstr.c in /home/afou_n/Github/Piscine/Piscine_C_J06/ex_04
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sun Dec 27 23:06:58 2015 Afou Nacerdine
** Last update Sun Dec 27 23:29:24 2015 Afou Nacerdine
*/

#include <stdio.h>

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}

char	*my_revstr(char *str)
{
  int	i;
  int	j;
  char	save;

  i = 0;
  j = my_strlen(str) - 1;
  while (i < j)
    {
      save = str[i];
      str[i] = str[j];
      str[j] = save;
      i = i + 1;
      j = j - 1;
    }
  return (str);
}
