#include <stdio.h>

void luasPersegi(int luas, int a, int b) {
    luas = a * b;
    printf("\nLuas persegi panjang adalah %d", luas);
}

int main(void) {
    int luas, p, l;
    printf("Masukkan panjang : ");
    scanf("%d", &p);
    printf("Masukkan luas : ");
    scanf("%d", &l);

    luasPersegi(luas, p, l);
    printf("\nLuas persegi panjang (main %d",luas);
}