#include <stdio.h>

//Definition des prototypes
void Mois (char mois [][20] ,int n);// n = la taille du tableau

//definition des variables
void Mois (char mois [][20],int n)
{
    printf("\n_______________________________________________________\n");
    for (int i = 0; i < n/4; i++)
    {
        printf("|");
        for ( int j=i ; j< n ; j=j+3 )
        {
            printf( "  %-10s", mois[j] );
            printf("|");
        }
    printf("\n_______________________________________________________\n\n");
    }
}


//fonction principal

int main(int argc, char const *argv[])
{
    //les mois en Francais
    char MoisFran[][20] = {"Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin",
                            "juillet", "Aout", "Septembre", "Octobre", "Novembre", 
                            "Decembre"
                            };
    //les mois en anglais
    char MoisAng[][20] = {"January", "February", "March", "April", "May", "June",
                            "july", "August", "September", "October", "November", 
                            "December"
                            };

    int choix;
    int n;
    printf("*******Choississez parmi les 3 options suivantes \n");
    printf("1. Pour afficher les mois en Français\n");
    printf("2. Pour afficher les mois en Anglais\n");
    printf("3. Pour quitter le programme\n");
    
    printf("Entrer votre choix : ");
    scanf("%d", &choix);
    while((choix != 1 ) && (choix != 2 ) && (choix != 3) )
     {
        printf("ATTENTION !!! y'a une erreur \n");
        printf("SVP veuillez regarder le menu pour pouvoir faire votre choix\n");
        printf("Entrer votre choix : ");
        scanf("%d", &choix);
     }
    switch (choix)
    {
    case 1:
         n = sizeof(MoisFran)/sizeof(MoisFran[0]); //permet de calculer la taille du tablea
        printf( " les mois de l'annee en Fancais sont :\n" );
        Mois(MoisFran,n);
        break;
    case 2:
          n = sizeof(MoisAng)/sizeof(MoisAng[0]); 
         printf( " the months of the year in English are :\n" );
         Mois(MoisAng,n);
         break;
    case 3:
          printf("Au revoir!!!!!!\n");
          break;
    default:
           //printf("Le choix n'est pas bon\n");
        break;
    }
    return 0;
}













