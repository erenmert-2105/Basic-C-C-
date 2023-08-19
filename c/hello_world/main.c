#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Name[] = "Mert";
    int Number = 25;


    printf(" Benim adim  %s ve ben aslinda kod yazmasini seviyorum \n", Name);
    printf(" Benim adim  %c ve ben aslinda kod yazmasini seviyorum \n", Name[0]);
    printf("Fakat c diline hakim degilim \n");
    printf("ben %d yasindayim \n",  Number);

    Number = 20;

    printf("ben %d yasindayken kod yazmak bana cok korkutucu geliyordu \n",  Number);

    return 0;
}
