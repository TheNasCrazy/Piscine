/*
** my_str_isprintable.c for my_str_isprintable.c in /home/afou_n/Github/Piscine/Piscine_C_J06/ex_15
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 12:14:33 2015 Afou Nacerdine
** Last update Mon Dec 28 12:47:00 2015 Afou Nacerdine
*/

#include <stdlib.h>

int	is_printable(char c)
{
  if (c >= 32 && c <= 126)
    return (1);
  else
    return (0);
}

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (is_printable(str[i]) == 0)
	return (0);
      else
	i = i + 1;
    }
  return (1);
}
