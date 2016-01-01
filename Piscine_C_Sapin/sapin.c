/*
** sapin.c for sapin.c in /home/afou_n/Github/Piscine/Piscine_C_Sapin
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Fri Jan  1 00:13:38 2016 Afou Nacerdine
** Last update Fri Jan  1 16:13:51 2016 Afou Nacerdine
*/

void	disp(int size, int type)
{
  int	i;

  i = 0;
  while (i < size)
    {
      if (type == 0)
	my_putchar(' ');
      else if (type == 1)
	my_putchar('*');
      i = i + 1;
    }
}

void	tronc(int taille)
{
  int	i;
  int	j;
  int	largeur_tronc;
  int	space;

  space = ((nbr_espace(taille) + 2) / 2) - (taille / 2);
  i = 0;
  while (i < taille)
    {
      disp(space, 0);
      j = 0;
      if ((taille % 2) != 0)
	largeur_tronc = taille;
      else
	largeur_tronc = taille + 1;
      while (j < largeur_tronc)
	{
	  my_putchar('|');
	  j = j + 1;
	}
      my_putchar('\n');
      i = i + 1;
    }
}

int	nbr_espace(int taille)
{
  int	i;
  int	j;
  int	line;
  int	size_max;

  i = 0;
  size_max = 1;
  line = 0;
  while (i < taille)
    {
      j = 0;
      while (j < 4 + line + i)
	{
	  size_max = size_max + 2;
	  j = j + 1;
	}
      size_max = size_max - 4;
      i = i + 1;
    }
  return (size_max);
}

void	feuille_boucle(int line, int *size, int *space)
{
  int	i;

  i = 0;
  while (i < 4 + line)
    {
      disp(*space, 0);
      disp(*size, 1);
      my_putchar('\n');
      *space = *space - 1;
      *size = *size + 2;
      i = i + 1;
    }
}

void	sapin(int taille)
{
  int	i;
  int	line;
  int	size;
  int	space;

  space = (nbr_espace(taille) + 2) / 2;
  i = 0;
  size = 1;
  line = 0;
  while (i < taille)
    {
      feuille_boucle(line + i, &size, &space);
      space = space + 2;
      size = size - 4;
      i = i + 1;
    }
  tronc(taille);
}
