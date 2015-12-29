/*
** sum_params.c for sum_params.c in /home/afou_n/Github/Piscine/Piscine_C_J08
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Tue Dec 29 11:15:26 2015 Afou Nacerdine
** Last update Tue Dec 29 11:40:03 2015 Afou Nacerdine
*/

#include <stdlib.h>

char	*sum_params(int ac, char **av)
{
  int	i;
  int	size;
  char	*str;

  i = 0;
  size = 0;
  while (i < ac)
    {
      size = size + my_strlen(av[i]) + 1;
      i = i + 1;
    }
  str = malloc(sizeof(char) * size);
  i = 0;
  while (i < ac)
    {
      my_strcat(str, av[i]);
      if (i < ac - 1)
	my_strcat(str, "\n");
      i = i + 1;
    }
  return (str);
}
