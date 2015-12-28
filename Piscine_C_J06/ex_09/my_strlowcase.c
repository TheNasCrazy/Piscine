/*
** my_strlowcase.c for my_strlowcase.c in /home/afou_n/Github/Piscine/Piscine_C_J06/ex_09
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 10:32:22 2015 Afou Nacerdine
** Last update Mon Dec 28 10:33:47 2015 Afou Nacerdine
*/

int	is_alpha_up(char c)
{
  if ((c >= 'A' && c <= 'Z'))
    return (1);
  else
    return (0);
}

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (is_alpha_up(str[i]) == 1)
	str[i] = str[i] + 32;
      i = i + 1;
    }
  return (str);
}
