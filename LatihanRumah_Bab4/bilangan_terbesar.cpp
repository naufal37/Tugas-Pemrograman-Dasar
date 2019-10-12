#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    int bila;
    int bilb;
    int bilc;
    printf("Masukkan Bilangan Pertama: ");
    scanf("%i",&bila);

    printf("\n Masukkan Bilangan Kedua: ");
    scanf("%i",&bilb);

    printf("\n Masukkan Bilangan Ketiga: ");
    scanf("%i",&bilc);

    if (bila>bilb&&bila>bilc){printf("Bilangan Terbesar Adalah Angka %i ",bila);}
    else if (bilb>bila&&bilb>bilc){printf("Bilangan Terbesar Adalah Angka %i",bilb);}
    else if (bilc>bilb&&bilc>bila){printf("Bilangan Terbesar Adalah Angka %i",bilc);}
    else{printf("Error");}
    getch();
    return 0;


}