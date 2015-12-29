##
## Makefile for Makefile in /home/afou_n/Github/Piscine/Piscine_C_J10/lib/my
## 
## Made by Afou Nacerdine
## Login   <afou_n@epitech.net>
## 
## Started on  Tue Dec 29 16:20:48 2015 Afou Nacerdine
## Last update Tue Dec 29 16:41:01 2015 Afou Nacerdine
##

RM	= rm -f

OBJ	= my_is_prime.c \
	  my_put_nbr.c \
	  my_showstr.c \
	  my_strcapitalize.c \
	  my_strdup.c \
	  my_str_isprintable.c \
	  my_strncat.c \
	  my_str_to_wordtab.c \
	  my_find_prime_sup.c \
	  my_power_rec.c \
	  my_putstr.c \
	  my_show_wordtab.c \
	  my_strcat.c \
	  my_str_isalpha.c \
	  my_str_isupper.c \
	  my_strncmp.c \
	  my_strupcase.c \
	  my_getnbr.c \
	  my_putchar.c \
	  my_revstr.c \
	  my_sort_int_tab.c \
	  my_strcmp.c \
	  my_str_islower.c \
	  my_strlen.c \
	  my_strncpy.c \
	  my_swap.c \
	  my_isneg.c \
	  my_putnbr_base.c \
	  my_showmem.c \
	  my_square_root.c \
	  my_strcpy.c \
	  my_str_isnum.c \
	  my_strlowcase.c \
	  my_strstr.c \
	  sum_params.c


LIB	= libmy.a

COM	= $(OBJ:.c=.o)

CFLAGS	= -Wall

all:	$(LIB)

$(LIB):	$(COM)
	ar rc $(LIB) $(COM)
	ranlib $(LIB)
	cp ./$(LIB) ../
	cp ./my.h ../../include/

clean:
	$(RM) $(COM)

fclean:	clean
	$(RM) $(LIB)
re:	fclean all
