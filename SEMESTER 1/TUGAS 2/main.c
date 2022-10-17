#include <stdio.h>

void main () {

    // int banyak_data = 5;
    // int arr[] = {1,2,3,4,5};

    // arr[2] = 20;
    // arr[0] = 10;


    // for(int i = 0; i < banyak_data ; i++) {
    //     printf("Masukkan Nilai element %d\n", arr[i]);
    // }


    // ==========================================================================
    // float value1[6] ;

    // for(int a = 0; a < 6; a++){
    //     printf("Masukkan nilai di index ke %d: ", a);
    //     scanf("%f", &value1[a]);   
        
    // }

    // for(int i = 0; i < 3; i++){
    //     printf("Hasil penjumlahan %.0f + %.0f =  %.0f\n", value1[i],value1[5-i], value1[i] + value1[5-i] );
    // } 

    // ==========================================================================

    int matrix[2][3];

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Masukkan nilai matrix pada index ke [%d][%d] : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++) {
            printf("Nilai matrix pada index ke [%d][%d]  = %d\n", i, j, matrix[i][j]);
            printf("Hasil nya : %d ", matrix[i][j]);
        }
    }
}