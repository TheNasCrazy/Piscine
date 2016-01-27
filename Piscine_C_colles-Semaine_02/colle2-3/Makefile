##
## Makefile for Makefile in /home/afou_n/Github/Piscine/Piscine_C_J10
## 
## Made by Afou Nacerdine
## Login   <afou_n@epitech.net>
## 
## Started on  Tue Dec 29 17:01:15 2015 Afou Nacerdine
## Last update Wed Jan 27 19:47:43 2016 Afou Nacerdine
##

CC	= gcc

OBJ	= colle2-3.c \
	  main.c

RM	= rm -f

NAME	= colle2-3

LIB	= -lmy -L../lib/

COM	= $(OBJ:.c=.o)

all:	$(NAME)

$(NAME):$(COM)
	$(CC) -o $(NAME) $(COM) $(LIB) -g3

clean:
	$(RM) $(COM)
fclean:	clean
	$(RM) $(NAME)
re:	fclean all
