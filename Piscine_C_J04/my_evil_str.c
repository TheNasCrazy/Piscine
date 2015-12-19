/*
** my_evil_str.c for my_evil_str.c in /home/afou_n/Github/Piscine/Piscine_C_J04
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sat Dec 19 20:55:07 2015 Afou Nacerdine
** Last update Sat Dec 19 21:25:22 2015 Afou Nacerdine
*/

int	my_evil_str(char* str)
{
  int	i;

  i = my_strlen(str) - 1;
  while (i >= 0)
    {
      my_putchar(str[i]);
      i = i - 1;
    }
}

