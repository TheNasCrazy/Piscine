/*
** my_aff_alpha.c for my_aff_alpha.c in /home/afou_n/Github/Piscine/Piscine_C_J03
**
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
**
** Started on  Sat Dec 19 18:54:07 2015 Afou Nacerdine
** Last update Sat Jan 16 13:20:03 2016 Afou Nacerdine
*/

int	my_aff_alpha()
{
  int	i;

  i = 0;
  while (i < 26)
    {
      my_putchar(97 + i);
      i = i + 1;
    }
  my_putchar('\n');
  return (0);
}

int	main()
{
  my_aff_alpha();
}
