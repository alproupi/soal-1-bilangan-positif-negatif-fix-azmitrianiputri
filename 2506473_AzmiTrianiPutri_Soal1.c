#include <stdio.h>
#include <stdlib.h>

int main() {
    int bilangan;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    if (bilangan < 0){
        printf("Bilangan negatif");
    } else if (bilangan > 0){
        printf("Bilangan positif");
    } else {
        printf("Bilangan nol");
    }
    return 0;
}