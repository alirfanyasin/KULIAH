#include <stdio.h>

int factorial(int input){
    if(input > 1) {
        return input * factorial(input - 1);
    }else {
        return 1;
    }
}

int main(void) {
    int angka;
    scanf("%d", &angka);
    
    printf("%d", factorial(angka));
    return 0;
}