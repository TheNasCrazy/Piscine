/*
** my_power_rec.c for my_power_rec.c in /home/afou_n/Github/Piscine/Piscine_C_J05
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sun Dec 27 20:43:27 2015 Afou Nacerdine
** Last update Tue Dec 29 16:48:22 2015 Afou Nacerdine
*/

#include "my.h"

int	my_power_rec(int nb, int power)
{
  if (power == 0)
    return (1);
  else if (power < 0)
    return (0);
  else
    return (my_power_rec(nb, power - 1) * nb);
}
