/*
** my_square_root.c for my_square_root.c in /home/afou_n/Github/Piscine/Piscine_C_J05
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sun Dec 27 20:50:09 2015 Afou Nacerdine
** Last update Tue Dec 29 14:55:54 2015 Afou Nacerdine
*/

int	my_square_root(int nb)
{
  int	result;

  result = 0;
  if (nb < 0)
    return (0);
  else
    {
      while (result * result < nb)
	result = result + 1;
      return (result);
    }
}
