/**
 * fibonacci serisi bir sayının kendisinden önceki 2 sayının toplamı şeklinde ilerler.
 * mesela alttaki örnekte 5 3 ile 2 nin toplamı
 * 
 *  1  1  2  3  5  8  13  21  34  55  89  144  233  377  610  987  1597  2584  4181
 */

#include<stdio.h>


int main(int argc, char const *argv[]){

    // başlangıç değerleri
    int sayi1=0, sayi2=1, toplam=1;

    while(1){ // sonsuz döngü. 5000 de kırılacak
        printf("%d  ", toplam);
        toplam = sayi1 + sayi2;
        sayi1 = sayi2;
        sayi2 = toplam;

        if(toplam >= 5000){ // toplam 5000 den büyükse döngüyü kır.
            printf("\n");
            break;
        }
    }

    return 0;
}
