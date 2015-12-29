/*
** main.c for main.c in /home/afou_n/Github/Piscine/Piscine_C_J10/do-op
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Tue Dec 29 17:07:07 2015 Afou Nacerdine
** Last update Tue Dec 29 17:53:12 2015 Afou Nacerdine
*/

int	main(int ac, char **av)
{
  if (ac != 4)
    return (0);
  else
    {
      do_op(av[1], av[2], av[3]);
      my_putchar('\n');
      return (0);
    }
}
