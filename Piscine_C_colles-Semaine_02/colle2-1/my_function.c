/*
** my_function.c for my_function.c in /home/afou_n/Github/Piscine/Piscine_C_colles-Semaine_02/colle2-1
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sat Jan  2 03:04:35 2016 Afou Nacerdine
** Last update Sat Jan  2 03:05:25 2016 Afou Nacerdine
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

void	disp_space(int space)
{
  int	i;

  i = 0;
  while (i < space)
    {
      my_putchar(' ');
      i = i + 1;
    }
}

void	display_left(char *str, int speed)
{
  int	i;
  int	space;
  char	*copy;

  i = 0;
  space = my_strlen(str) - 1;
  copy = malloc(my_strlen(str)) + 1;
  while (str[i] != '\0')
    {
      disp_space(space);
      copy[i] = str[i];
      my_putstr(copy);
      my_putchar('\r');
      i = i + 1;
      space = space - 1;
      usleep(speed);
    }
}

void	display_right(char *str, int speed)
{
  int	i;
  int	j;
  int	space;
  char	*copy;

  i = 0;
  j = my_strlen(str) - 1;
  space = my_strlen(str) - 1;
  copy = malloc(sizeof(char) * (my_strlen(str) + 1));
  while(str[i] != '\0')
    {
      copy[j - i] = str[j - i];
      my_putstr(copy + j - i);
      disp_space(space);
      my_putchar('\r');
      space = space - 1;
      usleep(speed);
      i = i + 1;
    }
}
