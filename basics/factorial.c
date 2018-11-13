/**
 * bir sayının faktöriyeli o sayıdan 1 e kadar olan sayıların çarpımıdır.
 * 
 * 0! = 1 //tanım gereği 1.
 * 1! = 1
 * 2! = 1 * 2
 * 3! = 3 * 2 * 1
 * 4! = 4 * 3 * 2 * 1
 * 5! = 5 * 4 * 3 * 2 * 1
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int sayi, sayac;
    long factorial=1;

    printf("Fatöriyel hesabı için sayı girin: ");
    scanf("%d", &sayi);

    printf("%d sayısının faktöriyeli: ", sayi);
    while(1){ // sayi 1 olasıya kadar devam et
        factorial = factorial * sayi;
        sayi--;
        if(sayi == 1){
            printf("%d\n", factorial);
            break;
        }
    }

    return 0;
}
