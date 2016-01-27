/*
** colle2-3.c for colle2-3.c in /home/afou_n/Github/Piscine/Piscine_C_colles-Semaine_02/colle2-3
**
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
**
** Started on  Wed Jan  6 00:58:53 2016 Afou Nacerdine
** Last update Wed Jan 27 19:44:17 2016 Afou Nacerdine
*/

#include "../include/my.h"
#include "colle2-3.h"

char	*deffilement_simple(t_colle col, char *copy)
{
  int	i;
  char	c;

  i = (my_strlen(copy) - 1) / 2;
  c = 32;
  while (c != col.str[i])
    {
      if (c != col.str[i])
	c = c + 1;
      my_putstr(copy);
      copy[i] = c;
      my_putchar('\r');
      usleep(col.speed);
    }
  return (copy);
}

char	*deffilement_double(t_colle col, int i, int j, char *copy)
{
  char	c;
  char	d;

  c = 32;
  d = 32;
  while (c != col.str[i] || d != col.str[j + 1])
    {
      if (c != col.str[i])
	c = c + 1;
      if (d != col.str[j + 1])
	d = d + 1;
      my_putstr(copy);
      copy[i] = c;
      copy[j + 1] = d;
      my_putchar('\r');
      usleep(col.speed);
    }
  return (copy);
}

char	*display_unpeer(t_colle col, char *copy)
{
  int	i;
  int	j;

  copy = deffilement_simple(col, copy);
  j = (my_strlen(copy) - 1) / 2 + 1;
  i = j - 2;
  while (j < my_strlen(col.str))
    {
      copy = deffilement_double(col, i, j - 1, copy);
      j = j + 1;
      i = i - 1;
    }
  return (copy);
}

char	*display_peer(t_colle col, char *copy)
{
  int	i;
  int	j;

  j = (my_strlen(copy) - 1) / 2;
  i = j;
  while (j < my_strlen(col.str) - 1)
    {
      copy = deffilement_double(col, i, j, copy);
      j = j + 1;
      i = i - 1;
    }
  return (copy);
}

void	display(t_colle col)
{
  int	peer;
  int	j;
  char	*copy;

  copy = malloc(sizeof(char ) * (my_strlen(col.str) + 1));
  j = 0;
  while (col.str[j] != '\0')
    {
      copy[j] = ' ';
      j = j + 1;
    }
  copy[j] = '\0';
  peer = my_strlen(col.str);
  if (peer % 2 == 0)
    copy = display_peer(col, copy);
  else
    copy = display_unpeer(col, copy);
  my_putstr(copy);
  my_putchar('\n');
  free(copy);
}
