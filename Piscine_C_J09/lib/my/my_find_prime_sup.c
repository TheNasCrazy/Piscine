/*
** my_find_prime_sup.c for my_find_prime_sup.c in /home/afou_n/Github/Piscine/Piscine_C_J05
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sun Dec 27 21:51:01 2015 Afou Nacerdine
** Last update Tue Dec 29 14:48:06 2015 Afou Nacerdine
*/

int	my_find_prime_sup(int nb)
{
  while (my_is_prime(nb) == 0)
    nb = nb + 1;
  return (nb);
}
