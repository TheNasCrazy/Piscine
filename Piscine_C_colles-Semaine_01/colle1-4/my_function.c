/*
** my_function.c for my_function.c in /home/afou_n/Github/Piscine/Piscine_C_colles-Semaine_01/colle1-2
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Thu Dec 31 12:58:46 2015 Afou Nacerdine
** Last update Thu Dec 31 13:40:45 2015 Afou Nacerdine
*/

void	just_x(int x)
{
  int	i;

  i = 0;
  while (i < x)
    {
      my_putchar('B');
      i = i + 1;
    }
  my_putchar('\n');
}

void	just_y(int y)
{
  int	i;

  i = 0;
  while (i < y)
    {
      my_putchar('B');
      my_putchar('\n');
      i = i + 1;
    }
}
