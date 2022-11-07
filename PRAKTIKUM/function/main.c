#include <stdio.h>
#include "function/kurang.c"
// #include "function/jumlah.c"
#include "function/kali.c"
#include "function/bagi.c"

int jumlah(int a, int b){
    printf("Hasilnya : %d", a + b);
}

int hasil(){
    int angka1, angka2, hasil;
    char operasi;
    printf("Masukkan nilai pertama : ");
    scanf("%d", &angka1);
    printf("Masukkan nilai kedua : ");
    scanf("%d", &angka2);
    printf("Masukkan Operasi : ");
    scanf("%s", &operasi);

    if(operasi == '+'){
        hasil = jumlah(angka1, angka2);
    }else if(operasi == '-'){
        hasil = kurang(angka1, angka2);
    }else if(operasi == '*'){
        hasil = kali(angka1, angka2);
    }else if(operasi == '/'){
        hasil = bagi(angka1, angka2);
    }else {
        printf("Operasi hitung salah");
    }

    return hasil;
}

int main(){
    printf("%d", hasil());
    return 0;
}