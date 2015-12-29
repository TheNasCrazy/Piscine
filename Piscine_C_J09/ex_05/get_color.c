/*
** get_color.c for get_color.c in /home/afou_n/Github/Piscine/Piscine_C_J09
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Tue Dec 29 16:09:19 2015 Afou Nacerdine
** Last update Tue Dec 29 18:35:57 2015 Afou Nacerdine
*/

int	get_color(char red, char green, char blue)
{
  return (((255 & 0xFF) << 24) | ((red & 0xFF) << 16) |
  ((green & 0xFF) << 8) | ((blue & 0xFF) << 0));
}
