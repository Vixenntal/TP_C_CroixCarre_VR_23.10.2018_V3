#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Dessin de la croix
    printf("Dessin de la croix\n");

    int i, j, nLignes; //Initialisation des variables de lignes et colonnes
    int cpt;
    char cCroix;

    printf("Quel caractere pour la croix ?\n");
    scanf("%c", &cCroix);
    fflush(stdin);

    printf("Quelle taille ?");
    scanf("%d", &nLignes);

    cpt = nLignes * 2 - 1;

    for(i=1; i<=cpt; i++) //Premiere boucle pour les lignes
    {
        for(j=1; j<=cpt; j++) //Deuxieme boucle pour les colonnes
        {
            if(j==i || (j==cpt - i + 1)) //Choisis entre l'espace ou le caractere en fonction du positionnement
            {
                printf("%c", cCroix); //Met le caractere choisis
            }
            else
            {
                printf(" "); //Met un espace
            }
        }

        printf("\n");
    }
    return 0;
}
