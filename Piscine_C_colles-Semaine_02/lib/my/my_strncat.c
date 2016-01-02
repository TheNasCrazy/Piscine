/*
** my_strncat.c for my_strncat.c in /home/afou_n/Github/Piscine/Piscine_C_J07
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 21:11:40 2015 Afou Nacerdine
** Last update Tue Dec 29 16:55:27 2015 Afou Nacerdine
*/

#include "my.h"

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	j;

  i = 0;
  j = my_strlen(dest);
  while (i < nb)
    {
      dest[j] = src[i];
      i = i + 1;
      j = j + 1;
    }
  dest[j] = '\0';
  return (dest);
}
