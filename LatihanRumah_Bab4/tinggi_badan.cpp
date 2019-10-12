#include <conio.h>
#include <math.h>
#include <stdio.h>

int main(){
    int tinggi;
    char jenis[10];
    start:
    printf("Masukkan Tinggi Badan: ");
    scanf("%i",&tinggi);

    if (tinggi>=0&&tinggi<=100){printf("Pendek");}
    else if (tinggi>=101&&tinggi<=150){printf("Sedang");}
    else if (tinggi>=151){printf("Tinggi");}
    else{printf("Tidak Valid,Masukkan Input yang benar"); goto start;}
    getch();
    return 0;
}