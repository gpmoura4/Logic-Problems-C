#include <stdio.h>


void pares(int n);

int main () {

    int n;
    scanf("%d",&n);

    printf("Os numeros pares de 1 a %d sao:\n",n);
    pares(n);
   
    

    return 0;

}

void pares (int n) {

    int i,j;
    int numeros[n];

    for(i=0; i<=n;i++){

        numeros[i] = i;
    }

    for(j=0;j<=n;j++){

        if(numeros[j]%2==0 &&numeros[j] != 0){
            printf("%d\n",numeros[j]);
        }

    }        
        
}
