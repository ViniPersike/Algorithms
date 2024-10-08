#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int dividers = 0;
    printf("Type a number to check if it's prime: ");
    scanf("%i", &n);

    for(int i = 1; i <= n; i++){
        if (n % i == 0){
            dividers++;
        }
    }

    if(dividers != 2){
        printf("The number %i isn't prime.", n);
    } else{
        printf("The number %i is prime", n);
    }
}
