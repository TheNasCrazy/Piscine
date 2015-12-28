/*
** my_aff_params.c for my_aff_params.c in /home/afou_n/Github/Piscine/Piscine_C_J07/ex_04/my_aff_params
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 21:20:32 2015 Afou Nacerdine
** Last update Mon Dec 28 21:24:09 2015 Afou Nacerdine
*/

void	my_aff_params(int ac, char **av)
{
  int	i;

  i = 0;
  while (i < ac)
    {
      my_putstr(av[i]);
      my_putchar('\n');
      i = i + 1;
    }
}

int	main(int ac, char **av)
{
  my_aff_params(ac, av);
  return (0);
}
