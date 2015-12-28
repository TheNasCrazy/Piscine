/*
** my_showstr.c for my_showstr.c in /home/afou_n/Github/Piscine/Piscine_C_J06
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 19:28:09 2015 Afou Nacerdine
** Last update Mon Dec 28 19:42:44 2015 Afou Nacerdine
*/

int	my_showstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (is_printable(str[i]) == 0)
	{
	  my_putchar('\\');
	  if (str[i] < 16)
	    my_putchar('0');
	  my_putnbr_base(str[i], "0123456789abcdef");
	}
      else
	my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
