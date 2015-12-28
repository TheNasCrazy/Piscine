/*
** my_strcat.c for my_strcat.c in /home/afou_n/Github/Piscine/Piscine_C_J07/ex_02
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 20:08:43 2015 Afou Nacerdine
** Last update Mon Dec 28 22:45:18 2015 Afou Nacerdine
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest[j] = src[i];
      i = i + 1;
      j = j + 1;
    }
  dest[j] = '\0';
  return (dest);
}
