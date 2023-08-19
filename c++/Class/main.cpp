
#include <stdio.h>
#include <cstring>

class Divice{
public:
    char Name[100]="";
    int Price;

    void used_for() {
    printf("%s worked for making life easier\n", Name);
    }

    void blabla(){
        printf("all devices have their feelings \n");
    }

    Divice(char name[100],int price){
    Price=price;
    strcpy(Name, name);


    }
};

class Car : Divice {
public:
    int Oil;

    void blabla2(){
    printf("cars cry whey you drive with low oil \n");
    }

    void used_for(){
    printf("%s worked for making way to go shorter \n", Name);
    }

    Car(char name[100],int price,int oil): Divice(name, price){
    Oil=oil;
    }



};



// Driver code
int main()
{
    // Class
    Divice computer("computer",25000);
    computer.blabla();

    // Inheritance from dvice
    Car Mercedes ("vehicle",50000,100);
    Mercedes.blabla2();
    printf("%d \n",Mercedes.Oil);

    // Polymorphism used here
    computer.used_for();
    Mercedes.used_for();

    return 0;
}
