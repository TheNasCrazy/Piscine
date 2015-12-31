/*
** my_str_islower.c for my_str_islower.c in /home/afou_n/Github/Piscine/Piscine_C_J06/ex_13
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 11:22:52 2015 Afou Nacerdine
** Last update Thu Dec 31 14:21:00 2015 Afou Nacerdine
*/

#include <stdlib.h>

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (is_lower(str[i]) == 0)
	return (0);
      else
	i = i + 1;
    }
  return (1);
}
