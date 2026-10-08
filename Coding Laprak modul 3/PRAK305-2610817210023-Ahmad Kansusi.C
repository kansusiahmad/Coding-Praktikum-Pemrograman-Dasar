#include <stdio.h>

int main() 
{
    int total, jam, menit, detik, hari;

    scanf("%d", &total);

    jam = total / 3600;
    menit = (total % 3600) / 60;
    detik = total % 60;

    if (jam >= 24) {
        hari = jam / 24;
        jam = jam % 24;
        printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);
    } else {
        printf("%02d:%02d:%02d\n", jam, menit, detik);
    }

    return 0;
}