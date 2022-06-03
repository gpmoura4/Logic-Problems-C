#include <stdio.h>

void acrescenta(int v[], int x);

int main () {

    int i;
    int numeros[8];

    for(i=0;i<8;i++) {
        scanf(" %d",&numeros[i]);
    }


    acrescenta(numeros, 8);

    printf("\n Novos Valores: \n");
    
    for(int j=0;j<8;j++){
        printf("%d ",numeros[j]);
    }

    return 0;

}


void acrescenta (int v[], int x) {

    int i;
    size_t n = sizeof(v)/sizeof(v[0]);

    for(i=0;i<x;i++){

        v[i] = v[i] + 1;

    }

}
