#include <stdio.h>
#include <conio.h>

int main() {
    int a,b,c,d,e,f,dsj,dsm,dsd,menit,bayar;
    printf("Mulai Bicara -->Jam -->Menit -->Detik = ");
    scanf("%i %i %i",&a,&b,&c);

    printf("Selesai Bicara Jam, Menit, Detik = ");
    scanf("%i %i %i",&d,&e,&f);

    dsj = d-a;
    dsm = e-b;
    dsd = f-c;


    printf("Total Bicara %i Jam, %i Menit, %i Detik \n ",dsj,dsm,dsd);
    printf("detik %i",f);
    if(dsd<60&&dsd!=0){dsd=60;}
    menit = (dsj*60)+(dsd/60)+dsm;
    printf("Menit : %i \n",menit);
    bayar = menit*150;
    printf("Yang Harus Dibayar Adalah: %i \n",bayar);
    getch();
    return 0;
}