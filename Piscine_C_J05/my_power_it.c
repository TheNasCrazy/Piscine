/*
** my_power_it.c for my_power_it.c in /home/afou_n/Github/Piscine/Piscine_C_J05
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sun Dec 27 20:35:26 2015 Afou Nacerdine
** Last update Sun Dec 27 20:43:57 2015 Afou Nacerdine
*/

int	my_power_it(int nb, int power)
{
  int	result;

  result = 1;
  if (power == 0)
    return (1);
  else if (power < 0)
    return (0);
  while (power > 0)
    {
      result = nb * result;
      power = power - 1;
    }
  return (result);
}
