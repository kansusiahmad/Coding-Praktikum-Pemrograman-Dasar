#include <stdio.h>
#include <math.h>

int main() {
    int alas = 5, tinggi = 12;
    float sisi_miring, keliling, luas;

    sisi_miring = sqrt(pow(alas, 2) + pow(tinggi, 2));
    keliling = alas + tinggi + sisi_miring;
    luas = 0.5 * alas * tinggi;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %.0f cm\n", sisi_miring);
    printf("Sisi B = %d cm\n", tinggi);
    printf("Sisi C = %d cm\n", alas);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm\n", luas);
    return 0;
}