##
## Makefile for Makefile in /home/afou_n/Github/Piscine/Piscine_C_J10
## 
## Made by Afou Nacerdine
## Login   <afou_n@epitech.net>
## 
## Started on  Tue Dec 29 17:01:15 2015 Afou Nacerdine
## Last update Tue Dec 29 17:40:21 2015 Afou Nacerdine
##

CC	= gcc

OBJ	= my_opp.c \
	  do-op.c \
	  main.c

RM	= rm -f

NAME	= do-op

LIB	= -lmy -L../lib/my/

COM	= $(OBJ:.c=.o)

all:	$(NAME)

$(NAME):$(COM)
	$(CC) -o $(NAME) $(COM) $(LIB)

clean:
	$(RM) $(COM)
fclean:	clean
	$(RM) $(NAME)
re:	fclean all
