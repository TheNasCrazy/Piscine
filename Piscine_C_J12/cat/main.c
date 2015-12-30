/*
** main.c for main.c in /home/afou_n/Github/Piscine/Piscine_C_J12/cat
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Wed Dec 30 23:30:02 2015 Afou Nacerdine
** Last update Wed Dec 30 23:31:01 2015 Afou Nacerdine
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/fcntl.h>
#include <errno.h>
#include "../include/my.h"

int	main(int ac, char **av)
{
  int	fd;
  int	ret;
  int	i;
  char	buffer[30000];

  stock2(ac, buffer, i, ret);
  i = 1;
  while (i < ac)
    {
      fd = open(av[i], O_RDONLY);
      if (errno == EACCES)
	check_err(av[i], 1);
      else if (errno ==  EISDIR)
	check_err(av[i], 3);
      else if (fd == - 1)
	check_err(av[i], 2);
      else
	{
	  ret = read(fd, buffer, 30000);   
	  buffer[ret] = '\0';
	  write(1, buffer, my_strlen(buffer));
	}
      i = i + 1;
      close(fd);
    }
}
