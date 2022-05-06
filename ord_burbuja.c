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
    for(int i=0;i<SIZE-1;i++){
        for(int j=i+1;j<SIZE;j++){
            if(ord_vector[i]>ord_vector[j]){
                int k= ord_vector[i];
                ord_vector[i] = ord_vector[j];
                ord_vector[j] = k;
            }
        }
    }
    printf("Vector ordenado:\n");
    for(int i=0;i<SIZE;i++){
        printf("%d) %d\n", i, ord_vector[i]);
    }

    printf("HOLA ESTE ES UN CAMBIO\n");
    return 0;
}