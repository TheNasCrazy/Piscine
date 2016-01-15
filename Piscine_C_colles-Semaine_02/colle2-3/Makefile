##
## Makefile for Makefile in /home/afou_n/Github/Piscine/Piscine_C_J10
## 
## Made by Afou Nacerdine
## Login   <afou_n@epitech.net>
## 
## Started on  Tue Dec 29 17:01:15 2015 Afou Nacerdine
## Last update Wed Jan  6 00:58:36 2016 Afou Nacerdine
##

CC	= gcc

OBJ	= colle2-3.c \
	  main.c

RM	= rm -f

NAME	= a.out

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
