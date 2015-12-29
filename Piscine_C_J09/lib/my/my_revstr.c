/*
** my_revstr.c for my_revstr.c in /home/afou_n/Github/Piscine/Piscine_C_J06/ex_04
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sun Dec 27 23:06:58 2015 Afou Nacerdine
** Last update Tue Dec 29 14:53:41 2015 Afou Nacerdine
*/

char	*my_revstr(char *str)
{
  int	i;
  int	j;
  char	save;

  i = 0;
  j = my_strlen(str) - 1;
  while (i < j)
    {
      save = str[i];
      str[i] = str[j];
      str[j] = save;
      i = i + 1;
      j = j - 1;
    }
  return (str);
}
