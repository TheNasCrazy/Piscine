/*
** my_putchar.c for my_putchar.c in /home/afou_n/Github/Piscine/Piscine_C_J04
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sat Dec 19 21:01:59 2015 Afou Nacerdine
** Last update Tue Dec 29 16:48:50 2015 Afou Nacerdine
*/

#include <unistd.h>
#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
