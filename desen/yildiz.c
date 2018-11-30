#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int sayi=0;
    printf("Bir sayi gir: ");
    scanf("%d", &sayi);


    //Üçgen yıldız.
    printf("Üçgen yıldız.\n");
    for(int i=0; i<=sayi; i++){
        for(int j=0; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
