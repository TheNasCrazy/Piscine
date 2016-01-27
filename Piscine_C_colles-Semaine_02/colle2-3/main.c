/*
** main.c for main.c in /home/afou_n/Github/Piscine/Piscine_C_colles-Semaine_02/colle2-3
**
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
**
** Started on  Wed Jan  6 00:55:47 2016 Afou Nacerdine
** Last update Wed Jan 27 19:45:26 2016 Afou Nacerdine
*/

#include "colle2-3.h"
#include "../include/my.h"

int	main(int ac, char **av)
{
  t_colle	col;

  if (ac == 1 || ac > 3)
    {
      my_putstr(av[0]);
      my_putstr(": word [speed]\n");
    }
  else
    {
      if (ac == 2)
	col.speed = 500000;
      else if (ac == 3 && my_getnbr(av[2]) == 0)
	col.speed = 18;
      else
	col.speed = my_getnbr(av[2]);
      col.str = av[1];
      display(col);
    }
}
