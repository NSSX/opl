#include <stdio.h>

int go_right(char *chaine, char *piece, int chainei, int piecei, int count, int length);
int go_down(char *chaine, char *piece, int chainei, int piecei, int count, int length);
int go_up(char *chaine, char *piece, int chainei, int piecei, int count, int length);
int go_left(char *chaine, char *piece, int chainei, int piecei, int count, int length);


int go_right(char *chaine, char *piece, int chainei, int piecei, int count, int length)
{
  if(count < 4)
    {
  piecei = piecei + 1;
  chainei = chainei + 1;
  count++;  
  piece[piecei] = 'x'; 
  chaine[chainei] = 'x';
 if(piece[piecei + 1] == '#' && chaine[chainei + 1] == '.')
   count = go_right(chaine, piece, chainei, piecei, count, length);
 if(piece[piecei + 5] == '#' && chaine[chainei + length] == '.')
   count = go_down(chaine, piece, chainei, piecei, count, length);
 if(piece[piecei - 5] == '#' && chaine[chainei - length] == '.')
   count = go_up(chaine, piece, chainei, piecei, count, length);
 if(piece[piecei - 1] == '#' && chaine[chainei - 1] == '.')
   count = go_left(chaine, piece, chainei, piecei, count, length);
    }
  return (count);
}
int go_down(char *chaine, char *piece, int chainei, int piecei, int count, int length)
{
  if(count < 4)
    {
  count++;
  piecei = piecei + 5;
  chainei = chainei + length;
piece[piecei] = 'x';  
chaine[chainei] = 'x';   
 if(piece[piecei + 1] == '#' && chaine[chainei + 1] == '.')
   count = go_right(chaine, piece, chainei, piecei, count, length);
 if(piece[piecei + 5] == '#' && chaine[chainei + length] == '.')
   count = go_down(chaine, piece, chainei, piecei, count, length);
 if(piece[piecei - 5] == '#' && chaine[chainei - length] == '.')
   count = go_up(chaine, piece, chainei, piecei, count, length);
 if(piece[piecei - 1] == '#' && chaine[chainei - 1] == '.')
   count = go_left(chaine, piece, chainei, piecei, count, length);
    }
  return (count);
}
int go_up(char *chaine, char *piece, int chainei, int piecei, int count, int length)
{
  if(count < 4)
    {
  count++;
  piecei = piecei - 5; 
  chainei = chainei - length;
 piece[piecei] = 'x';
chaine[chainei] = 'x';
 if(piece[piecei + 1] == '#' && chaine[chainei + 1] == '.')
   count = go_right(chaine, piece, chainei, piecei, count, length);
 if(piece[piecei + 5] == '#' && chaine[chainei + length] == '.')
   count = go_down(chaine, piece, chainei, piecei, count, length);
 if(piece[piecei - 5] == '#' && chaine[chainei - length] == '.')
   count = go_up(chaine, piece, chainei, piecei, count, length);
 if(piece[piecei - 1] == '#' && chaine[chainei - 1] == '.')
   count = go_left(chaine, piece, chainei, piecei, count, length);
    }
  return (count);
}
int go_left(char *chaine, char *piece, int chainei, int piecei, int count, int length)
{
  if(count < 4)
    {
  count++;
  piecei = piecei - 1;
  chainei = chainei - 1;
  piece[piecei] = 'x';
chaine[chainei] = 'x';  
 if(piece[piecei + 1] == '#' && chaine[chainei + 1] == '.')
   count = go_right(chaine, piece, chainei, piecei, count, length);
 if(piece[piecei + 5] == '#' && chaine[chainei + length] == '.')
   count = go_down(chaine, piece, chainei, piecei, count, length);
 if(piece[piecei - 5] == '#' && chaine[chainei - length] == '.')
   count = go_up(chaine, piece, chainei, piecei, count, length);
 if(piece[piecei - 1] == '#' && chaine[chainei - 1] == '.')
   count = go_left(chaine, piece, chainei, piecei, count, length);
    }
  return (count);
}
