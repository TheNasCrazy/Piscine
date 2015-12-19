/*
** my_aff_comb2.c for my_aff_comb2 in /home/afou_n/rendu/Piscine_C_J03
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Wed Sep 30 16:13:17 2015 Afou Nacerdine
** Last update Sat Dec 19 19:30:40 2015 Afou Nacerdine
*/

int	my_other2(int thousand, int hundred, int ten, int unit)
{
  if (thousand + hundred < ten + unit)
    {
      my_putchar(thousand);
      my_putchar(hundred);
      my_putchar(' ');
      my_putchar(ten);
      my_putchar(unit);
      if (!(thousand == 57 && hundred == 56 && ten == 57 && unit == 57))
	my_putchar(',');
    }
  return (unit + 1);
}
int	my_aff_comb2()
{
  int	thousand;
  int	hundred;
  int	ten;
  int	unit;

  thousand = 48;
  while (thousand <= 57)
    {
      hundred = 48;
      while (hundred <= 57)
	{
	  ten = 48;
	  while (ten <= 57)
	    {
	      unit = 49;
	      while (unit <= 57)
		unit = my_other2(thousand, hundred, ten, unit);
	      ten = ten + 1;
	    }
	  hundred = hundred + 1;
	}
      thousand = thousand + 1;
    }
  return (0);
}
