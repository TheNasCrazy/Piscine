/*
** my_aff_revalpha.c for my_aff_revalpha.c in /home/afou_n/Github/Piscine/Piscine_C_J03
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sat Dec 19 18:57:07 2015 Afou Nacerdine
** Last update Sat Dec 19 19:05:23 2015 Afou Nacerdine
*/

int	my_aff_revalpha()
{
  int	i;

  i = 26;
  while (i > 0)
    {
      my_putchar(96 + i);
      i = i - 1;
    }
  my_putchar('\n');
  return (0);
}
