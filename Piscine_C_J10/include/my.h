/*
** my.h for my.h in /home/afou_n/Github/Piscine/Piscine_C_J09
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Tue Dec 29 13:56:33 2015 Afou Nacerdine
** Last update Tue Dec 29 16:12:14 2015 Afou Nacerdine
*/

#ifndef MY_H_
# define MY_H_

int	my_find_prime_sup(int nb);
int	my_getnbr(char *str);
int	my_isneg(int n);
int	my_is_prime(int nb);
int	my_power_rec(int nb, int power);
void	my_putchar(char c);
int	my_putnbr_base(int nbr, char *base);
int	my_put_nbr(int nb);
int	my_putstr(char *str);
char	*my_revstr(char *str);
int	my_showmem(char *str, int size);
int	my_showstr(char *str);
int	my_show_wordtab(char **tab);
void	my_sort_int_tab(int *tab, int size);
int	my_square_root(int nb);
char	*my_strcapitalize(char *str);
char	*my_strcat(char *dest, char *src);
int	my_strcmp(char *s1, char *s2);
char	*my_strcpy(char *dest, char *src);
char	*my_strdup(char *str);
int	my_str_isalpha(char *str);
int	my_str_islower(char *str);
int	my_str_isnum(char *str);
int	my_str_isprintable(char *str);
int	my_str_isupper(char *str);
int	my_strlen(char *str);
char	*my_strlowcase(char *str);
char	*my_strncat(char *dest, char *src, int nb);
int	my_strncmp(char *s1, char *s2, int n);
char	*my_strncpy(char *dest, char *src, int n);
char	*my_strstr(char *str, char *to_find);
char	**my_str_to_wordtab(char *str);
char	*my_strupcase(char *str);
int	my_swap(int *a, int *b);
char	*sum_params(int ac, char **av);

#endif /* !MY_H_ */
