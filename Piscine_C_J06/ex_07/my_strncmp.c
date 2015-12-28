/*
** my_strncmp.c for my_strncmp.c in /home/afou_n/Github/Piscine/Piscine_C_J06
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 10:11:18 2015 Afou Nacerdine
** Last update Mon Dec 28 10:18:49 2015 Afou Nacerdine
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0') && (i < n))
    {
      if (s1[i + 1] > s2[i + 1])
	return (1);
      else if (s1[i + 1] < s2[i + 1])
	return (-1);
      i = i + 1;
    }
  return (0);
}
