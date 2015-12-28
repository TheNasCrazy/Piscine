/*
** my_swap.c for my_swap.c in /home/afou_n/Github/Piscine/Piscine_C_J04
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sat Dec 19 20:45:23 2015 Afou Nacerdine
** Last update Sat Dec 19 20:50:50 2015 Afou Nacerdine
*/

int	my_swap(int *a, int *b)
{
  int	save;

  save = *a;
  *a = *b;
  *b = save;
  return (0);
}
