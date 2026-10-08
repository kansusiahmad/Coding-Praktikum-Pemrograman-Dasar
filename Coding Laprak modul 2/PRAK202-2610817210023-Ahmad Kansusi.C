#include <stdio.h>

int main( ) 
{
    float a, b;

    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &a);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &b);

    printf("Hasil dari penjumlahan nilai pertama \"%.2g\" dan nilai kedua \"%.2g\" adalah \"%.2f\"\n", a, b, a + b);

    return 0;
}