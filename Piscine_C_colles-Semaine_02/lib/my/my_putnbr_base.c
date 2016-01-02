/*
** my_putnbr_base.c for my_putnbr_base.c in /home/afou_n/Github/Piscine/Piscine_C_J06
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 12:49:43 2015 Afou Nacerdine
** Last update Tue Dec 29 16:50:35 2015 Afou Nacerdine
*/

#include "my.h"

int	my_putnbr_base(int nbr, char *base)
{
  int	len;
  int	i;

  len = my_strlen(base);
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = nbr * -1;
    }
  i = 1;
  while ((nbr / i) >= len)
    i = i * len;
  while (i > 0)
    {
      my_putchar(base[(nbr / i) % len]);
      i = i / len;
    }
  return (nbr);
}
