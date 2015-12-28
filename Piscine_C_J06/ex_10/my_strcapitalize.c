/*
** my_strcapitalize.c for my_strcapitalize.c in /home/afou_n/Github/Piscine/Piscine_C_J06/ex_10
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 10:49:13 2015 Afou Nacerdine
** Last update Mon Dec 28 11:04:16 2015 Afou Nacerdine
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 1;
  if (str[0] >= 'a' && str[0] <= 'z')
    str[0] = str[0] - 32;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'a' && str[i] <= 'z') &&
	  (str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+'))
	str[i] = str[i] - 32;
      i = i + 1;
    }
  return (str);
}
