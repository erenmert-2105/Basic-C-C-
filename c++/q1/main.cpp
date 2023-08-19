
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


void get_input(int *a){
    int num1;
    int num2;
    int newarray[5] = {0,0,0,0,0};

    printf("please enter first int number\n");
    scanf("%d",&num1);
    printf("please enter second int number\n");
    scanf("%d",&num2);

    a[3]=num1;
    a[4]=num2;

    // Sort the array in ascending order
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (a[j] < a[i]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("sorted array is like that : \n");
    for (int c = 0; c < 5; c++) {
        printf("%d ", a[c]);
    }
    printf("\n");
    printf("max %d : \n",a[4]);
    printf("min %d : \n",a[0]);

}

int main()
{
    int arr[] = {0,0,0,0,0};
    int i =0;

    for (int i =0;i<3;i++){
        arr[i]=rand() % 11;
    }
    get_input(arr);

    return 0;
}
