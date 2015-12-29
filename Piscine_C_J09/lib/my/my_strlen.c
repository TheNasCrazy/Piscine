/*
** my_strlen.c for my_strlen.c in /home/afou_n/Github/Piscine/Piscine_C_J04
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Sat Dec 19 20:52:34 2015 Afou Nacerdine
** Last update Tue Dec 29 15:01:17 2015 Afou Nacerdine
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}
