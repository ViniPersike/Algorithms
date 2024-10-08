#include <stdio.h>

int main(){
    int total_dividers = 0;
    int total_numbers = 0;
    int cont = 1;
    int n = 1;
    
    printf("A perfect number is a number that that the sum of all it's divisors are the base number");

    while (total_numbers < 4){
        cont = 1;
        total_dividers = 0;
        while (cont != n){
            if (n % cont == 0){
                total_dividers += cont;
            }
            cont++;
        }
        if (total_dividers == n){
            printf("\n%i is a perfect number", n);
            total_numbers++;
        }
        n++;
    }   
}