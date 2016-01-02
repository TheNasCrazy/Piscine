/*
** my_showstr.c for my_showstr.c in /home/afou_n/Github/Piscine/Piscine_C_J06
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 19:28:09 2015 Afou Nacerdine
** Last update Tue Dec 29 16:58:06 2015 Afou Nacerdine
*/

#include "my.h"

int	is_printable(char c);

int	my_showstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (is_printable(str[i]) == 0)
	{
	  my_putchar('\\');
	  if (str[i] < 16)
	    my_putchar('0');
	  my_putnbr_base(str[i], "0123456789abcdef");
	}
      else
	my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
