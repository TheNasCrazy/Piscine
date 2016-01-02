/*
** my_put_nbr.c for my_put_nbr.c in /home/afou_n/Github/Piscine/Piscine_C_J03
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sat Dec 19 20:32:29 2015 Afou Nacerdine
** Last update Tue Dec 29 16:50:49 2015 Afou Nacerdine
*/

#include "my.h"

int	my_put_nbr(int nb)
{
  int	result;
  int	div;

  if (nb == -2147483648)
    my_putstr("-2147483648");
  else
    {
      if (nb < 0)
	{
	  my_putchar('-');
	  nb = nb * -1;
	}
      div = 1;
      while ((nb / div) >= 10)
	div = div * 10;
      while (div > 0)
	{
	  result = (nb /div) % 10;
	  my_putchar(48 + result);
	  div = div / 10;
	}
    }
  return (0);
}
