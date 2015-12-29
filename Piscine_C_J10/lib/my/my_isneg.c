/*
** my_isneg.c for my_isneg.c in /home/afou_n/Github/Piscine/Piscine_C_J03
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sat Dec 19 19:09:59 2015 Afou Nacerdine
** Last update Tue Dec 29 16:47:57 2015 Afou Nacerdine
*/

#include "my.h"

int	 my_isneg(int n)
{
  if (n < 0)
    my_putchar('N');
  else
    my_putchar('P');
  my_putchar('\n');
  return (0);
}
