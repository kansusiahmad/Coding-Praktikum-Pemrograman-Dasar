#include <stdio.h>
#include <math.h>

int main() 
{
    int A, B;
    scanf("%d %d", &A, &B);

    int alas = sqrt(B * B - A * A);
    int tinggi = A;
    int keliling = alas + tinggi + B;
    int luas = 0.5 * alas * tinggi;

    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm^2\n", luas);

    return 0;
}