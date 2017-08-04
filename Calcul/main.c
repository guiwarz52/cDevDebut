#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{// on demande les nombres 1,2 et 3 a l'utilisateur :
    int resultat = 0, nombre1 = 0,nombre2 =0, nombre3 = 0;
    printf("Entrez le nombre 1 : ");
    scanf("%d", &nombre1);
    printf("Entrez le nombre 2 : ");
    scanf("%d", &nombre2);
    printf("Entrez le nombre 3 : ");
    scanf("%d", &nombre3);
    //on fait le calcul
    resultat = nombre1 - nombre2 - nombre3;
    // on affiche le resultat
    printf("%d - %d - %d = %d\n", nombre1, nombre2, nombre3, resultat);
    return 0;
}

