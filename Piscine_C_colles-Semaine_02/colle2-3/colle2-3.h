/*
** colle2-3.h for colle2-3.h in /home/thenascrazy/blinux/Github/Piscine/Piscine_C_colles-Semaine_02/colle2-3
**
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
**
** Started on  Wed Jan 27 15:37:30 2016 Afou Nacerdine
** Last update Wed Jan 27 19:44:51 2016 Afou Nacerdine
*/

#ifndef COLLE2_3_H_
# define COLLE2_3_H_

#include <unistd.h>
#include <stdlib.h>

typedef struct	s_colle
{
  int		speed;
  char		*str;
}		t_colle;

/* In ./colle2-3.c */
char			*deffilement_simple(t_colle col, char *copy);
char			*deffilement_double(t_colle col, int i, int j, char *copy);
char			*display_unpeer(t_colle col, char *copy);
char			*display_peer(t_colle col, char *copy);
void			display(t_colle col);

#endif /* !COLLE2_3_H_ */
