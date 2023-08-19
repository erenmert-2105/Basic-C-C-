#include <iostream>
#include <math.h>


int main()
{
    int input;
    int c=0;


    printf("lutfen bir deðer gir");
    scanf("%d",&input);

    if (input == 2){
        printf("asal");

    }

    else if (input < 2 ){
            printf("asal degil");
}
    else {
        for(int i=2;i<input*input;i++){
            if (input%i==0){
                printf("asal degil");
                break;
            }
        }
    }
}

