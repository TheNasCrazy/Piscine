/*
** colle2-1.c for colle2-1.c in /home/afou_n/Github/Piscine/Piscine_C_colles-Semaine_02/colle2-1
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Fri Jan  1 16:56:13 2016 Afou Nacerdine
** Last update Sat Jan  2 09:01:46 2016 Afou Nacerdine
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"

int	my_tab_len(char **tab)
{
  int	count;

  count = 0;
  while (tab[count] != NULL)
    count = count + 1;
  return (count);
}

int	my_strlen_max(char **tab)
{
  int	i;
  int	size;

  size = my_strlen(tab[0]);
  i = 0;
  while (tab[i] != NULL)
    {
      if (my_strlen(tab[i]) > size)
	size = my_strlen(tab[i]);
      i = i + 1;
    }
  return (size);
}

int	if_spd(char **tab)
{
  int	i;

  if (tab[1][0] == '-' && (tab[1][1] >= '0' && tab[1][1] <= '9'))
    i = 2;
  else
    i = 1;
  return (i);
}

void	all(int peer, char **tab, int speed, int i)
{
  if (peer % 2 == 0)
    display_right(tab[i], speed);
  else
    display_left(tab[i], speed);
}

void	display(char **tab, int speed)
{
  int	i;
  int	peer;
  int	size;

  i = if_spd(tab);
  size = my_tab_len(tab);
  while (tab[i] != NULL)
    {
      peer = size - i;
      if ((if_spd(tab) == 1 && size == 2) || (if_spd(tab) == 2 && size == 3))
	{
	  display_right(tab[i], speed);
	  disp_space(my_strlen_max(tab));
	  my_putchar('\r');
	  usleep(speed);
	  display_left(tab[i], speed);
	}
      else
	all(peer, tab, speed, i);
      disp_space(my_strlen_max(tab));
      my_putchar('\r');
      i = i + 1;
      usleep(speed);
    }
}

