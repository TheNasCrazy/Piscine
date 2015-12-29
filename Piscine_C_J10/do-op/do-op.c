/*
** do-op.c for do-op.c in /home/afou_n/Github/Piscine/Piscine_C_J10/do-op
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Tue Dec 29 17:06:42 2015 Afou Nacerdine
** Last update Tue Dec 29 18:12:38 2015 Afou Nacerdine
*/

#include "../include/my.h"
#include "./my_opp.h"

int	my_do_op_check(char c)
{
  char	*str;
  int	i;

  i = 0;
  str = "+-*/%";
  while (str[i] != '\0')
    {
      if (str[i] == c)
	return (i);
      i = i + 1;
    }
  return (-1);
}

void	my_do_op_tab(int i, int inbr1, int inbr2)
{
  void	(*tab[5])(int, int);

  tab[0] = &opp_add;
  tab[1] = &opp_sub;
  tab[2] = &opp_mult;
  tab[3] = &opp_div;
  tab[4] = &opp_mod;
  (*tab[i])(inbr1, inbr2);
}

void	do_op(char *nbr1, char *opp, char *nbr2)
{
  int	inbr1;
  int	inbr2;

  inbr1 = (int) atoi(nbr1);
  inbr2 = (int) atoi(nbr2);
  if (opp[0] == '+' || opp[0] == '-' || opp[0] == '*' ||
      opp[0] == '/' || opp[0] == '%')
    my_do_op_tab(my_do_op_check(opp[0]), inbr1, inbr2);
  else
    my_put_nbr(0);
}
