#include <stdio.h>
 
int main()
{
   char chaine[100], sup[100], i = 0, j = 0;
 
   printf(" Entrez une chaîne de caractère: ");
   gets(chaine);
 
   while (chaine[i] != '\0')
   {
      if ((chaine[i] == ' ' && chaine[i+1] == ' ') != 1) {
        sup[j] = chaine[i];
        j++;
      }
      i++;
   }
   
   sup[j] = '\0';
   printf(" Après la suppression des espaces on a \n: %s", sup);
   return 0;
}