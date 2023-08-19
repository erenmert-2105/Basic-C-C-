#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void analyzeData(const char *input, const char *a) {
    // strchr() looks for charter in string if cant find charter returns null else returns returns adress of charter at memory
    if (strchr(input, '.') != NULL || strchr(input, ',') != NULL ) {
        double number = atof(input);
        // strcpy() copys string to veriable you want
        strcpy(a, "Girilen veri bir ondalýk sayý");
        // atoi() collects first number in string
    } else if (atoi(input) != NULL ) {
        int number = atoi(input);
        strcpy(a, "Girilen veri bir tamsayý");
    } else {
        strcpy(a, "Girilen veri bir karakter dizisi");
    }
}

int main() {
    char input[100];
    char out[100];

    while (true){

        printf("Cikis icin 0 girin yeni islem icin 3 saniye bekleyin \n");

        printf("Veri giriniz: ");
        fgets(input, sizeof(input), stdin);

        analyzeData(input,out);
        if (strcmp(input, "0\n")== 0) {
                printf("Cikis yapildi \n");
                sleep(3);
            break;
        }
        else{
            printf("out: %s\n", out);
            }

        sleep(3);
        system("cls");

    }

    return 0;
}


