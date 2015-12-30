/*
** mylist.h for mylist.h in /home/afou_n/Github/Piscine/Piscine_C_J11
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Wed Dec 30 17:10:34 2015 Afou Nacerdine
** Last update Wed Dec 30 23:13:46 2015 Afou Nacerdine
*/

#ifndef MYLIST_H_
# define MYLIST_H_

typedef struct	s_list
{
  void		*data;

  struct s_list	*next;
}		t_list;

#endif /* !MYLIST_H_ */
