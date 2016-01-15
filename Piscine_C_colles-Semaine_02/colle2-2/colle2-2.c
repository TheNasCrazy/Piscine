/*
** colle2-2.c for colle2-2.c in /home/afou_n/Github/Piscine/Piscine_C_colles-Semaine_02/colle2-2
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sat Jan  2 09:05:21 2016 Afou Nacerdine
** Last update Sat Jan  2 22:10:12 2016 Afou Nacerdine
*/

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

void	display_left_first(char *str, int speed)
{
  int	i;
  char	*copy;

  i = 0;
  copy = malloc(sizeof(char) * (my_strlen(str) + 1) * 2);
  my_strcpy(copy, str);
  while (i <= my_strlen(str))
    {
      my_putstr(copy);
      copy[my_strlen(str) + i] = copy[i];
      copy[i] = 32;
      my_putchar('\r');
      usleep(speed);
      i = i + 1;
    }
}

void	display_left(char *str, int speed)
{
  int	i;
  char	*copy;

  i = 0;
  copy = malloc(sizeof(char) * (my_strlen(str) + 1) * 2);
  my_strcpy(copy, str);
  while (i < my_strlen(str))
    {
      copy[my_strlen(str) + i] = copy[i];
      copy[i] = 32;
      my_putstr(copy);
      my_putchar('\r');
      usleep(speed);
      i = i + 1;
    }
}

void	display_right(char *str, int speed)
{
  int	i;
  int	j;
  char	*copy;

  i = 0;
  j = 0;
  copy = malloc(sizeof(char) * (my_strlen(str) + 1) * 2);
  while (str[j] != '\0')
    {
      copy[j] = 32;
      j = j + 1;
    }
  my_strcat(copy, str);
  while (i < my_strlen(str))
    {
      copy[my_strlen(str) - 1 - i] = copy[my_strlen(copy) - 1 - i];
      copy[my_strlen(copy) - 1 - i] = 32;
      my_putstr(copy);
      my_putchar('\r');
      usleep(speed);
      i = i + 1;
    }
}


void	display(char *str, int speed)
{
  int	i;

  i = 0;
  while (42)
    {
      if (i == 0)
	display_left_first(str, speed);
      else
	display_left(str, speed);
      display_right(str, speed);
      i = i + 1;
    }
}

