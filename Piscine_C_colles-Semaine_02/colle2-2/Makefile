##
## Makefile for Makefile in /home/afou_n/Github/Piscine/Piscine_C_J10
## 
## Made by Afou Nacerdine
## Login   <afou_n@epitech.net>
## 
## Started on  Tue Dec 29 17:01:15 2015 Afou Nacerdine
## Last update Sat Jan  2 22:11:45 2016 Afou Nacerdine
##

CC	= gcc

OBJ	= colle2-2.c \
	  main.c

RM	= rm -f

NAME	= colle2-2

LIB	= -lmy -L../lib/

COM	= $(OBJ:.c=.o)

all:	$(NAME)

$(NAME):$(COM)
	$(CC) -o $(NAME) $(COM) $(LIB)

clean:
	$(RM) $(COM)
fclean:	clean
	$(RM) $(NAME)
re:	fclean all
