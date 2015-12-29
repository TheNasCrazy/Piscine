/*
** my_strdup.c for my_strdup.c in /home/afou_n/Github/Piscine/Piscine_C_J08/ex_01
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Tue Dec 29 11:10:34 2015 Afou Nacerdine
** Last update Tue Dec 29 13:28:17 2015 Afou Nacerdine
*/

#include <stdlib.h>

char	*my_strdup(char *str)
{
  int	i;
  char	*copy;

  if ((copy = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
    {
      my_putstr("Error malloc\n");
      return (NULL);
    }
  while (str[i] != '\0')
    {
      copy[i] = str[i];
      i = i + 1;
    }
  copy[i] = '\0';
  return (copy);
}
