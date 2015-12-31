/*
** my_putchar.c for my_putchar.c in /home/afou_n/Github/Piscine/Piscine_C_J03
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Thu Dec 31 14:08:10 2015 Afou Nacerdine
** Last update Thu Dec 31 14:08:43 2015 Afou Nacerdine
*/

#include <unistd.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
}
