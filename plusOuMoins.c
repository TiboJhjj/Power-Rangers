#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int const min=1;
    int max=100,mystere=0,try=0,compteur=0,rejouer=1,niveau;
    
    srand(time(NULL));

    do
    {   
        printf("Choisissez un niveau de difficulte :\n");
        printf("1 : 1 - 100\n2 : 1 - 1000\n3 : 1 - 10000\n");
        scanf("%d",&niveau);

        switch (niveau)
        {
            case 1:
                printf("Vous avez choisi le niveau 1.\n");
                max=100;
                break;
            case 2:
                printf("Vous avez choisi le niveau 2.\n");
                max=1000;
                break;
            case 3:
                printf("Vous avez choisi le niveau 3.\n");
                max=10000;
                break; 
        }
        
        mystere = (rand()%(max-min+1))+min;

        do
        {
            printf("Quel est le nombre mystere ? ");
            scanf("%d",&try);
            compteur++;

            if (mystere<try)
            {
                printf("C'est moins !\n\n");
            }
            else if (mystere>try)
            {
                printf("C'est plus !\n\n");
            }
            else
            {
                printf("Bravo vous avez trouve le nombre mystere en %d coups !\n\n",compteur);
            }

        } while(try!=mystere);

        printf("Rejouer ?\n1=Oui\n0=Non\nAlors ? ");
        scanf("%d",&rejouer);

    }while(rejouer);

    printf("A bientot !");

    return 0;

}