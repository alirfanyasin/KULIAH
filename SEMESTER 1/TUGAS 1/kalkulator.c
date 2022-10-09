#include <stdio.h>

void main() {
  int bilangan_1, bilangan_2, hasil;
  char operasi;
  float hasilBagi;
  
  printf("================================================\n");
  printf("                     KALKULATOR                 \n");
  printf("================================================\n");

// Input and Output
  printf("Masukkan operasi hitung (+, -, *, /) \t: ");
  scanf("%s", &operasi);

  printf("Masukkan bilangan pertama \t\t: ");
  scanf("%d", &bilangan_1);
   
  printf("Masukkan bilangan kedua \t\t: ");
  scanf("%d", &bilangan_2);
  

// Logic and validation
  if(operasi == '+' || operasi == '-' || operasi == '*' || operasi == '/') {
    if(bilangan_1 && bilangan_2) {

        // Arithmetic logic
        if(operasi == '+') {
          printf("\n================= PENJUMLAHAN =================\n");
          hasil = bilangan_1 + bilangan_2;
        }else if(operasi == '-') {
          printf("\n================= PENGURANGAN =================\n");
          hasil = bilangan_1 - bilangan_2;
        }else if(operasi == '*') {
          printf("\n================== PERKALIAN ==================\n");
          hasil = bilangan_1 * bilangan_2;
        }else if(operasi == '/') {
          printf("\n================== PEMBAGIAN ==================\n");
          hasilBagi = (float) bilangan_1 / bilangan_2; // Casting to float
          printf("Hasil \t\t\t\t\t: %.2f", hasilBagi);
        }

        // Result
        if(hasil) {
          printf("Hasil \t\t\t\t\t: %d", hasil);
        }

        // Comparison logic
        if(bilangan_1 > bilangan_2) {
          printf("\nPerbandingan \t\t\t\t: %d > %d", bilangan_1, bilangan_2);
        }
        if(bilangan_1 < bilangan_2) {
          printf("\nPerbandingan \t\t\t\t: %d < %d", bilangan_1, bilangan_2);
        }
        if(bilangan_1 == bilangan_2) {
          printf("\nPerbandingan \t\t\t\t: %d = %d", bilangan_1, bilangan_2);
        }

    // Error message
    }else {
      printf("\n==================== ERROR ====================\n");
      printf("Bilangan yang dimasukkan bukan angka!");
    }
  // Error message
  }else {
    printf("\n==================== ERROR ====================\n");
    printf("Operasi hitung salah!");
  }
  
}
