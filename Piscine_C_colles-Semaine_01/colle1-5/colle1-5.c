/*
** colle1-5.c for colle1-5.c in /home/afou_n/Github/Piscine/Piscine_C_colles-Semaine_01
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Wed Dec 30 23:42:42 2015 Afou Nacerdine
** Last update Thu Dec 31 13:51:55 2015 Afou Nacerdine
*/

void	first(int x, int y)
{
  int	i;

  i = 0;
  while (i < x)
    {
      if (i == 0)
	my_putchar('A');
      else if (i == x - 1)
	my_putchar('C');
      else
	my_putchar('B');
      i = i + 1;
    }
  my_putchar('\n');
}

void	last(int x, int y)
{
  int	i;

  i = 0;
  while (i < x)
    {
      if (i == 0)
	my_putchar('C');
      else if (i == x - 1)
	my_putchar('A');
      else
	my_putchar('B');
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
	my_putchar('B');
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
      if (i == 0)
	first(x, y);
      else if (i == y - 1)
	last(x, y);
      else
	middle(x, y);
      i = i + 1;
    }
}

void	colle(int x, int y)
{
  if (x == 0 || y == 0)
    my_putchar('\n');
  else if (x == 1 || y == 1)
    {
      if (x == 1 && y > 1)
	just_y(y);
      else if (x > 1 && y == 1)
	just_x(x);
      else
	{
	  my_putchar('B');
	  my_putchar('\n');
	}
    }
  else
    square(x, y);
}
