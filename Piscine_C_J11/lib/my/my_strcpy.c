/*
** my_strcpy.c for my_strcpy.c in /home/afou_n/Github/Piscine/Piscine_C_J06/ex_02
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sun Dec 27 21:59:35 2015 Afou Nacerdine
** Last update Tue Dec 29 16:52:57 2015 Afou Nacerdine
*/

#include "my.h"

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
