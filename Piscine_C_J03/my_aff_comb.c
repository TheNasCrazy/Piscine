/*
** my_aff_comb.c for my_aff_comb.c in /home/afou_n/Github/Piscine/Piscine_C_J03
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sat Dec 19 19:13:53 2015 Afou Nacerdine
** Last update Sat Dec 19 19:25:21 2015 Afou Nacerdine
*/

int	my_other(int cent, int dix, int unite)
{
  if (cent < dix && dix < unite)
    {
      my_putchar(cent);
      my_putchar(dix);
      my_putchar(unite);
      if (cent != 55)
	{
	  my_putchar(',');
	  my_putchar(' ');
	}
    }
}

int	my_aff_comb()
{
  int	cent;
  int	dix;
  int	unite;

  cent = '0';
  while (cent <= '7')
    {
      dix = '1';
      while (dix <= '8')
	{
	  unite = '2';
	  while (unite <= '9')
	    {
	      my_other(cent, dix, unite);
	      unite = unite + 1;
	    }
	  dix = dix + 1;
	}
      cent = cent + 1;
    }
  my_putchar('\n');
}
