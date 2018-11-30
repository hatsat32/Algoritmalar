#include<stdio.h>

int main(int argc, char const *argv[])
{
    int dizi[] = {5, 3, 8, 12, 65, 43, 38, 97, 11, 54, 66, 42};
    int length = sizeof(dizi)/sizeof(*dizi); // dizinin boyutunu bulmak için.
    int imin=0; // en küçük eleman indexi
    int tmp=0; //geçici. swap için kullanılacak.

    printf("dizinin ilk hali:\n"); // önce dizinin ilk halini yazdır.
    for(int i=0; i<length; i++)
        printf("%d ", dizi[i]);
    printf("\n");

    for(int i=0; i<length; i++){
        imin = i; // ilk elemanı en küçük kabul et.

        for(int ii=i; ii<length; ii++){
            if(dizi[ii] < dizi[imin]) // en küçük elemanın indisini bul
                imin = ii;  // en küçük elemanın indizini imin e ata.
        }

        //değişim işlemi
        tmp = dizi[i];
        dizi[i] = dizi[imin];
        dizi[imin] = tmp;
        
    }

    printf("dizinin sıralanmış hali:\n");
    for(int i=0; i<length; i++)
        printf("%d ", dizi[i]);
    printf("\n");

    return 0;
}
