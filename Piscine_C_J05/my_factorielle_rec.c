/*
** my_factorielle_rec.c for my_factorielle_rec.c in /home/afou_n/Github/Piscine/Piscine_C_J05
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sun Dec 27 20:10:15 2015 Afou Nacerdine
** Last update Sun Dec 27 20:34:01 2015 Afou Nacerdine
*/

int	my_factorielle_rec(int nb)
{
  if (nb < 0)
    return (0);
  else if (nb == 0)
    return (1);
  else
    return (nb * my_factorielle_rec(nb - 1));
}
