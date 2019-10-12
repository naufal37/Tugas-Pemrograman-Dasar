//Ganjil Genap
#include <stdio.h>
#include <conio.h>
#include <math.h>

void tentukan(){
    int a,c;
    printf("Masukkan Angka Yang Ingin Ditentukan: ");
    scanf("%i",&a);

    c = a%2;

    if (c != 0){
        printf("\n Bilangan Ganjil");
    }
    else{
        printf("\n Bilangan Genap");
    }
    getch();
}
int main(){
    printf("===========Ganjil Atau Genap===========\n");
    tentukan();
}