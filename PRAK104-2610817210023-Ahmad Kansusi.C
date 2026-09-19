#include <stdio.h>

int main() {
    int harga_a = 400000, harga_b = 350000;
    int diskon1 = 13, diskon2 = 21;

    float harga_a_diskon = harga_a - (harga_a * diskon1 / 100.0);
    float harga_b_diskon = harga_b - (harga_b * diskon2 / 100.0);

    printf("Harga sepatu A adalah %d\n", harga_a);
    printf("Harga sepatu B adalah %d\n", harga_b);
    printf("Sepatu A mendapat diskon %d%% sehingga harganya jadi %.0f\n", diskon1, harga_a_diskon);
    printf("Sepatu B mendapat diskon %d%% sehingga harganya jadi %.0f\n", diskon2, harga_b_diskon);
    return 0;
}