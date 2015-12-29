/*
** my_strncopy.c for my_strncopy.c in /home/afou_n/Github/Piscine/Piscine_C_J06/ex_03
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sun Dec 27 22:23:25 2015 Afou Nacerdine
** Last update Tue Dec 29 15:03:19 2015 Afou Nacerdine
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[i] != '\0' && i < n)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
