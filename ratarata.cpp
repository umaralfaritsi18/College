#include<stdio.h>

int main(){

    int nomor, ave=0, x;
    float ratarata;
    for (x=1;x<=3;x++)
    {
        printf("Masukkan 3 angka, angka ke %d:", x);
        scanf("%d",&nomor);
        ave += nomor;    
    }

ratarata = ave/3.0;
printf("Rata-ratanya adalah: %.2f\n",ratarata);
return 0;
}