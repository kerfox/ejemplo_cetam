#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(){
    int ord_vector[SIZE];
    srand(time(NULL));
    printf("MAX: %d\n", RAND_MAX);
    printf("Generación de numeros aleatorios\n");
    for(int i=0;i<SIZE;i++){
        ord_vector[i] = 100+rand()%101;
        printf("%d) %d\n", i, ord_vector[i]);
    }
    return 0;
}