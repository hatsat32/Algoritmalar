/**
 * Bir sayının basamak sayısını bulan program.
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int sayi, basamak_sayisi=0, sayac;
    printf("Bir sayı girin: ");
    scanf("%d", &sayi);
    sayac = sayi;

    while(1){
        sayac = sayac / 10;
        basamak_sayisi++;

        if(sayac == 0){
            printf("%d sayısının basamak sayısı: %d\n", sayi,basamak_sayisi);
            break;
        }
    }
}