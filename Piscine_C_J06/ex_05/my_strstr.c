/*
** my_strstr.c for my_strstr.c in /home/afou_n/Github/Piscine/Piscine_C_J06/ex_05
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 00:02:34 2015 Afou Nacerdine
** Last update Mon Dec 28 00:05:43 2015 Afou Nacerdine
*/

#include <string.h>

int	main()
{
  char *str1;
  char *str2;

  str1 = "nacerdinne13@gmail.com";
  str2 = "13@";
  printf("%s\n", strstr(str1, str2));
}
