/*
** my_str_isnum.c for my_str_is_num.c in /home/afou_n/Github/Piscine/Piscine_C_J06/ex_12
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 11:18:31 2015 Afou Nacerdine
** Last update Mon Dec 28 12:40:06 2015 Afou Nacerdine
*/

#include <stdlib.h>

int	is_num(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (is_num(str[i]) == 0)
	return (0);
      else
	i = i + 1;
    }
  return (1);
}
