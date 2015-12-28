/*
** my_rev_params.c for my_rev_params.c in /home/afou_n/Github/Piscine/Piscine_C_J07
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 21:26:51 2015 Afou Nacerdine
** Last update Mon Dec 28 21:36:43 2015 Afou Nacerdine
*/

int	my_rev_params(int ac, char **av)
{
  while (ac-- > 0)
    {
      my_putstr(av[ac]);
      my_putchar('\n');
    }
}

int	main(int ac, char **av)
{
  my_rev_params(ac, av);
  return (0);
}

