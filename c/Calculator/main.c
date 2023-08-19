#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>





#include <stdio.h>

int main() {
    char input[100];
    char first[100] = "";
    char second[100] = "";
    char operation;

    int condison = 0;
    int counter =0;

    printf("islem \n");
    scanf("%s", input);

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '+' || input[i] == '-' || input[i] == '/' || input[i] == '*') {
            operation = input[i];
            condison = 1;
        } else {
            if (condison == 0) {
                first[i] = input[i];

            }
            else if (condison == 1) {
                second[counter] = input[i];
                counter++;


            }
        }
    }

    printf("First: %s\n", first);
    printf("Second: %s\n", second);

    float one = strtof(first, NULL);
    float two = strtof(second, NULL);

    if (operation=='+'){
            printf("Sonuc: %f\n", one+two);
    }
    else if (operation=='-'){
            printf("Sonuc: %f\n", one-two);
    }
    else if (operation=='/'){
            printf("Sonuc: %f\n", one/two);
    }
    else if (operation=='*'){
            printf("Sonuc: %f\n", one*two);
    }
    else{
                printf("gecersiz islem \n");
    }

    return 0;
}

