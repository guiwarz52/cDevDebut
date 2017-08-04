#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv [])
{
    int age = 0;
    printf("Quel age avez vous ? ");
    scanf("%d", &age);// demande d'ecrire quelque chose dans la console avec scanf
    printf("Ah! Vous avez %d ans !\n\n", age);
    return 0;
}
