/*
** colle2-3.c for colle2-3.c in /home/afou_n/Github/Piscine/Piscine_C_colles-Semaine_02/colle2-3
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Wed Jan  6 00:58:53 2016 Afou Nacerdine
** Last update Wed Jan  6 01:31:36 2016 Afou Nacerdine
*/

void	disp_space(int space)
{
  int	i;

  i = 0;
  while (i != space)
    {
      my_putchar(' ');
      i = i + 1;
    }
}

void	display_peer(char *str, int speed)
{
  
}

/*
void	display(char *str, int speed)
{
  int	peer;

  peer = my_strlen(str);

  if (peer % 2 == 0)
    display_peer(str, speed);
  else
    display_unpeer(str, speed);
}
*/
