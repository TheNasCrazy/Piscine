/*
** my_is_prime.c for my_is_prime.c in /home/afou_n/Github/Piscine/Piscine_C_J05
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sun Dec 27 21:40:25 2015 Afou Nacerdine
** Last update Tue Dec 29 14:50:08 2015 Afou Nacerdine
*/

int	my_is_prime(int nb)
{
  int	i;

  i = 2;
  if (nb == 0 || nb == 1)
    return (0);
  while (i < nb)
    {
      if (nb % i == 0)
	return (0);
      i = i + 1;
    }
  return (1);
}
