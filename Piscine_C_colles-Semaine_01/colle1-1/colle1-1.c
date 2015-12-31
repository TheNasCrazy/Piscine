/*
** colle1-1.c for colle1-1.c in /home/afou_n/Github/Piscine/Piscine_C_colles-Semaine_01
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Wed Dec 30 23:42:42 2015 Afou Nacerdine
** Last update Thu Dec 31 13:42:16 2015 Afou Nacerdine
*/

void	first_last(int x, int y)
{
  int	i;

  i = 0;
  while (i < x)
    {
      if (i == 0 || i == x - 1)
	my_putchar('o');
      else
	my_putchar('-');
      i = i + 1;
    }
  my_putchar('\n');
}

void	middle(int x, int y)
{
  int	i;

  i = 0;
  while (i < x)
    {
      if (i == 0 || i == x - 1)
	my_putchar('|');
      else
	my_putchar(' ');
      i = i + 1;
    }
  my_putchar('\n');
}

void	square(int x, int y)
{
  int	i;

  i = 0;
  while (i < y)
    {
      if (i == 0 || i == y - 1)
	first_last(x, y);
      else
	middle(x, y);
      i = i + 1;
    }
}

void	colle(int x, int y)
{
  if (x == 0 || y == 0)
    my_putchar('\n');
  else
    square(x, y);
}
