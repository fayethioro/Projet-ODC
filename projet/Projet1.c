#include <string.h>
#include <stdio.h>
//#define N 20
//les mois en Francais
char MoisFran[][20] = {"Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin",
                        "juillet", "Aout", "Septembre", "Octobre", "Novembre"
                        
                        };
/*les mois en anglais
char MoisAng[12][20] = {"January", "February", "March", "April", "May", "June",
                        "july", "August", "September", "October", "November", 
                        "December"
                        };*/

//int i ;

int main(int argc, char const *argv[])
{
    int n = sizeof(MoisFran)/sizeof(MoisFran[0]); 
    printf(" le nombre d'element est %d",n);
    printf( " le mois de l'annee en Fancais sont\n" );
    printf("\n_____________________________________________________________________\n");
    printf("\n ");
    
    for (int i = 0; i < n/4; i++)
    {   
         printf("| ");
        for ( int j=i ; j<n ; j=j+3 )
        {
            printf( " %-10s|", MoisFran[j] );
        }
    printf("\n____________________________________________________________________\n\n");
    }
    
   /*for ( int j=1 ; j<=11 ; j=j+3 )
        {
            printf( "  %-10s", MoisFran[j] );
        //printf("    ");
            
        }
    printf("\n_________________________________________________\n\n");
    for ( int j=2 ; j<=11 ; j=j+3 )
        {
            printf( "  %-10s", MoisFran[j] );
        //printf("    ");
            
        }

    printf("\n_________________________________________________\n\n")*/
    
    printf("\n");
  printf("\n");
    return 0;
}