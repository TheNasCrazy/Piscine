/*
** my_sort_params.c for my_sort_params.c in /home/afou_n/Github/Piscine/Piscine_C_J07
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 21:38:10 2015 Afou Nacerdine
** Last update Mon Dec 28 22:46:00 2015 Afou Nacerdine
*/

void	my_swap_tab(char **av, int index1, int index2)
{
  char	*save;

  save = av[index1];
  av[index1] = av[index2];
  av[index2] = save;
}

void	my_sort_params(int ac, char **av)
{
  int	i;
  int	inf;

  inf = 1;
  while (inf == 1)
    {
      inf = 0;
      i = 1;
      while (i < ac - 1)
	{
	  if (my_strcmp(av[i], av[i + 1]) > 0)
	    {
	      my_swap_tab(av, i, i + 1);
	      inf = 1;
	    }
	  i = i + 1;
	}
    }
}

int	main(int ac, char **av)
{
  int	i;

  i = 0;
  my_sort_params(ac, av);
  while (i < ac)
    {
      my_putstr(av[i]);
      my_putchar('\n');
      i = i + 1;
    }
  return (0);
}
