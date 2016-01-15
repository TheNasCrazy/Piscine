/*
** main.c for main.c in /home/afou_n/Github/Piscine/Piscine_C_colles-Semaine_02/colle2-3
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Wed Jan  6 00:55:47 2016 Afou Nacerdine
** Last update Wed Jan  6 01:23:13 2016 Afou Nacerdine
*/

int	main(int ac, char **av)
{
  int	speed;

  if (ac == 1 || ac > 3)
    {
      my_putstr(av[0]);
      my_putstr(": word [speed]\n");
    }
  else
    {
      if (ac == 2)
	speed = 500000;
      else if (ac == 3 && my_getnbr(av[2]) == 0)
	speed = 18;
      else
	speed = my_getnbr(av[2]);
      display_peer(av[1], speed);
    }
}
