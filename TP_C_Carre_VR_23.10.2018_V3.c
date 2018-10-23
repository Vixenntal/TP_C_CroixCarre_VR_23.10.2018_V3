#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Dessin du carré
    printf("Dessin du carre\n");

    int i, j, nLignes; //Initialisation des variables de lignes et colonnes
    char cExt, cInt; //Initialisation des variables de choix de caracteres

    printf("Entrez caractere exterieur :\n");
    scanf("%c", &cExt);
    fflush(stdin); //Vide le tampon apres le premier scanf()

    printf("Entrez caractere interieur :\n");
    scanf("%c", &cInt);

    printf("Quelle taille ?\n");
    scanf("%d", &nLignes);
    printf("\n");


    for(i=1; i<=nLignes; i++) //Premiere boucle pour les lignes
    {
        for(j=1; j<=nLignes; j++) //Deuxieme boucle pour les colonnes
        {
            if(i==1 || i==nLignes || j==1 || j==nLignes)
            {
                printf("%c", cExt); //Ecrit le caracetere choisis
            }
            else
            {
                printf("%c", cInt);
            }
        }
        printf("\n");
    }
    return 0;
}
