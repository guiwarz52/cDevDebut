#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{

    int na = 0;
    int rep = 0;

    srand(time(NULL));
    na = rand();
    na = na / 10000 ;

    printf("Donner un nombre\n");
    scanf("%d", &rep);

    while (na != rep) {

        if ( na > rep )
        {
            printf ("Plus !");
            printf ("Réessaye ! Tu y est presque !");
        }
        else if ( na < rep )
        {
            printf ("Moins !");
            printf ("Réessaye ! Tu y est presque !");
        }
        else
        {
            scanf ("%d", &rep);
        }

    }

    printf ("Bien joué !\n");


}
