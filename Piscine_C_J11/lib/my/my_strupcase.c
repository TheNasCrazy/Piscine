/*
** my_strupcase.c for my_strupcase.c in /home/afou_n/Github/Piscine/Piscine_C_J06/ex_08
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 10:21:21 2015 Afou Nacerdine
** Last update Tue Dec 29 16:56:18 2015 Afou Nacerdine
*/

#include "my.h"

int	is_lower(char c)
{
  if ((c >= 'a' && c <= 'z'))
    return (1);
  else
    return (0);
}

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (is_lower(str[i]) == 1)
	str[i] = str[i] - 32;
      i = i + 1;
    }
  return (str);
}
