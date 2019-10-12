#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
    char nama[50];
    int quiz,tugas,uts,uas,akhir;
    printf("Masukkan Nama Mahasiswa: ");
    gets(nama);

    printf("Masukkan Nilai Tugas : ");
    scanf("%i",&tugas);

    printf("Masukkan Nilai Quiz : ");
    scanf("%i",&quiz);


    printf("Masukkan Nilai UTS : ");
    scanf("%i",&uts);


    printf("Masukkan Nilai UAS : ");
    scanf("%i",&uas);

    akhir = ((float)0.1*quiz) + ((float)0.2*tugas) + ((float)0.3*uts) + ((float)0.4*uas);
    if (akhir>=0 && akhir<=30){puts(nama);printf("E");}
    else if (akhir>=31 && akhir<=45){puts(nama);printf("D");}
    else if (akhir>=46 && akhir<=65){puts(nama);printf("C");}
    else if (akhir>=66 && akhir<=79){puts(nama);printf("B");}
    else if (akhir>=80 && akhir<=100){puts(nama);printf("A");}
    else printf("Salah!");

    getch();
    return 0;
}