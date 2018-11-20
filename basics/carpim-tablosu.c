/**
 * Çarpım tablosunu ekrana basan program.
 * 
 * */

#include<stdio.h>

int main(int argc, char const *argv[])
{
    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){ // çarpım tablosunun satırlarını sırayla yazdırır.
            printf("%2d x%2d=%2d   ", j, i, i*j); // biçimlendirilmiş şekilde ekrana yazdırır.
        }
        printf("\n");
    }

    return 0;
}
