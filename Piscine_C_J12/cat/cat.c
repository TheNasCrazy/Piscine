/*
** cat.c for cat.c in /home/afou_n/rendu/Piscine_C_J12
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Tue Oct 13 17:09:17 2015 Afou Nacerdine
** Last update Wed Dec 30 23:31:04 2015 Afou Nacerdine
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>
#include <errno.h>

int	check_err(char *av, int message)
{
  my_putstr("cat: ");
  my_putstr(av);
  if (message == 1)
    my_putstr(": Permision denied\n");
  else if (message == 2)
    my_putstr(": No such file or directory\n");
  else if (message == 3)
    my_putstr(": Is a directory\n");
}

int	stock2(int ac, char buffer[30000], int i, int ret)
{
  i = 1;
  if (ac == 1)
    {
      while ((ret = read(0, buffer, 30000)) > 0)
        write(1, buffer, ret);
    }
}

