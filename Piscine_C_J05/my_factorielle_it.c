/*
** my_factorielle_it.c for my_factorielle_it.c in /home/afou_n/Github/Piscine/Piscine_C_J05
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sun Dec 27 20:01:35 2015 Afou Nacerdine
** Last update Sun Dec 27 20:07:07 2015 Afou Nacerdine
*/

int	my_factorielle_it(int nb)
{
  int	i;

  i = nb - 1;
  if (nb == 0)
    return (1);
  if (nb < 0)
    return (0);
  while (i > 0)
    {
      nb = nb * i;
      i = i - 1;
    }
  return (nb);
}
