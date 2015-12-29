/*
** my_getnbr.c for my_getnbr.c in /home/afou_n/Github/Piscine/Piscine_C_J04
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sat Dec 19 21:31:36 2015 Afou Nacerdine
** Last update Tue Dec 29 18:32:46 2015 Afou Nacerdine
*/

int	is_nbr(char c)
{
  if (c >= '0' && c <= '9')
    return (1);
  else
    return (0);
}

int	is_add_sub(char c)
{
  if (c == '-' || c == '+')
    return (1);
  else
    return (0);
}

int	my_getnbr(char *str)
{
  int	nb;
  int	i;
  int	neg;

  nb = 0;
  i = 0;
  neg = 1;
  while (is_add_sub(str[i]) == 1)
    i = i + 1;
  if (str[i - 1] == '-')
    neg = -1;
  while (is_nbr(str[i]) == 1)
    {
      if (nb < 0)
	return (0);
      nb = ((nb * 10) + (str[i] - '0'));
      i = i + 1;
    }
  if (nb < 0)
    return (0);
  return (nb * neg);
}
