/*
** my_strcmp.c for my_strcmp.c in /home/afou_n/Github/Piscine/Piscine_C_J06/ex_06
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 09:48:07 2015 Afou Nacerdine
** Last update Mon Dec 28 10:13:39 2015 Afou Nacerdine
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
    {
      if (s1[i + 1] > s2[i + 1])
	return (1);
      else if (s1[i + 1] < s2[i + 1])
	return (-1);
      i = i + 1;
    }
  return (0);
}
