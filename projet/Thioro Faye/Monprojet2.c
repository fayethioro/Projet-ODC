#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
int main()
{
   char chaine[100], sup[100], i = 0, j = 0;
 
   printf(" Entrez une chaîne de caractère: ");
   fgets(chaine,20,stdin);
 
   while (chaine[i] != '\0')
   {
      if ((chaine[i] == ' ' && chaine[i+1] == ' ') != 1) {
        sup[j] = chaine[i];
        j++; 
      }
      i++;
   }
   
   sup[j] = '\0';
   printf(" Après la suppression des espaces on a :\n %s \n", sup);
   printf("\n");
   return 0;
}