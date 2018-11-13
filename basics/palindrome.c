/**
 * Bir sayıyı ters çeviren C programı. yani Palindrounu bulan program.
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int palindrome=0, sayi=0, tmp1=0;
    printf("Bir sayi giriniz:");
    scanf("%d", &sayi);

    while(1){
        tmp1 = sayi % 10; // sayının son basamağını al
        sayi = sayi / 10; // sonraki basamağı bulmak için sayıyı 10 a böl

        // palindrome sayısını 10 ile çarparak yeni basamak için yer aç
        // daha sonra yeni basamağı palindrome ile topla
        // bu işlem yeni basamağı palindromun sonuna ekler
        palindrome = palindrome * 10 + tmp1;

        if(sayi == 0)
            break;
    }
    printf("Palindrome: %d\n", palindrome);
    
    return 0;
}
