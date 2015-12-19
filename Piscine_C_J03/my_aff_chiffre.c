/*
** my_aff_chiffre.c for my_aff_chiffre.c in /home/afou_n/Github/Piscine/Piscine_C_J03
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sat Dec 19 19:05:57 2015 Afou Nacerdine
** Last update Sat Dec 19 19:08:23 2015 Afou Nacerdine
*/

int	my_aff_chiffre()
{
  int	i;

  i = 0;

  while (i < 10)
    {
      my_putchar(48 + i);
      i = i + 1;
    }
  my_putchar('\n');
  return (0);
}
