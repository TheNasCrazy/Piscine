/*
** my_str_to_wordtab.c for my_str_to_wordtab.c in /home/afou_n/Github/Piscine/Piscine_C_J08
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Tue Dec 29 11:53:30 2015 Afou Nacerdine
** Last update Tue Dec 29 15:04:37 2015 Afou Nacerdine
*/

#include <stdlib.h>

int	my_wordlen(char *str)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (str[i] != '\0')
    {
      if (is_num(str[i]) == 0 && is_alpha(str[i]) == 0)
	count = count + 1;
      i = i + 1;
    }
  return (count);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	i;
  int	j;
  int	k;

  i = 0;
  k = 0;
  tab = malloc(sizeof(char *) * my_wordlen(str) + 1);
  while (str[i] != '\0')
    {
      tab[k] = malloc(sizeof(char) * my_strlen(str));
      while (is_num(str[i]) == 0 && is_alpha(str[i]) == 0)
	i = i + 1;
      j = 0;
      while (is_num(str[i]) == 1 || is_alpha(str[i]) == 1)
	{
	  tab[k][j] = str[i];
	  i = i + 1;
	  j = j + 1;
	}
      k = k + 1;
    }
  tab[k] = NULL;
  return (tab);
}

