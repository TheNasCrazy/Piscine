/*
** my_opp.c for my_opp.c in /home/afou_n/Github/Piscine/Piscine_C_J10/do-op
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Tue Dec 29 17:33:57 2015 Afou Nacerdine
** Last update Tue Dec 29 17:50:10 2015 Afou Nacerdine
*/

void	opp_add(int inbr1, int inbr2)
{
  my_put_nbr (inbr1 + inbr2);
}

void	opp_sub(int inbr1, int inbr2)
{
  my_put_nbr (inbr1 - inbr2);
}

void	opp_mult(int inbr1, int inbr2)
{
  my_put_nbr (inbr1 * inbr2);
}

void	opp_div(int inbr1, int inbr2)
{
  if (inbr2 == 0)
    my_putstr("Stop : division by zero");
  else
    my_put_nbr (inbr1 / inbr2);
}

void	opp_mod(int inbr1, int inbr2)
{
  if (inbr2 == 0)
    my_putstr("Stop : modulo by zero");
  else
    my_put_nbr (inbr1 % inbr2);
}
