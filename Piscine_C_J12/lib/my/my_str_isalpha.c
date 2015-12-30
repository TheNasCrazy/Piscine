/*
** my_str_isalpha.c for my_str_isalpha.c in /home/afou_n/Github/Piscine/Piscine_C_J06/ex_11
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 11:07:52 2015 Afou Nacerdine
** Last update Tue Dec 29 16:53:53 2015 Afou Nacerdine
*/

#include <stdlib.h>
#include "my.h"

int	is_alpha(char c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return (1);
  else
    return (0);
}

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (is_alpha(str[i]) == 0)
	return (0);
      else
	i = i + 1;
    }
  return (1);
}
