/*
** main.c for main.c in /home/afou_n/Github/Piscine/Piscine_C_colles-Semaine_02/colle2-1
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Fri Jan  1 16:50:31 2016 Afou Nacerdine
** Last update Sat Jan  2 03:10:18 2016 Afou Nacerdine
*/

int	main(int ac, char **av)
{
  int	speed;

  if (ac == 1)
    {
      my_putstr(av[0]);
      my_putstr(": [-speed] word1 [word2 [word3...]]\n");
      return (0);
    }
  else
    {
      if (av[1][0] == '-' && (av[1][1] >= '0' && av[1][1] <= '9'))
	speed = my_getnbr(av[1]) * -1;
      else
	speed = 150000;
      while (42)
	display(av, speed);
    }
}
