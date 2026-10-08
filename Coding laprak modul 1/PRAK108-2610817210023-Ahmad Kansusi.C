#include <stdio.h>

int main() {
    int putaran = 5;
    int jarak = 14;
    float keliling_taman, jari;

    keliling_taman = (float)jarak / putaran;
    jari = keliling_taman / (2 * 3.14);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n\n", jarak);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari);
    return 0;
}