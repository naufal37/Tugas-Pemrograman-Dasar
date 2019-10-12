#include <stdio.h>
#include <conio.h>

int main(){
    int a,b;
    printf("Masukkan Angka Bulat,Pisahkan Dengan Spasi: ");
    scanf("%i %i",&a,&b);
    if (a==b){printf("Bilangan Ke 1 & Bilangan Ke 2 Sama");}
    else{printf("Bilangan Ke 1 & Bilangan Ke 2 Tidak Sama");}
    getch();
    return 0;
}