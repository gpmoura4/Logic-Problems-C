#include <stdio.h>

float media(float v[]);

int main () {

    int n,x;
    float res;
    float vetor[x];

    printf("Insira a quantidade de vetores\n");
    scanf(" %d",&n);

    for (int i=0;i<n;i++){

        x = 0;

        printf("Insira o tamanho do vetor\n");
        scanf(" %d",&x);

            for(int j=0;j<x;j++){
                scanf(" %f",&vetor[j]);
            }

            
            res=media(vetor);
            printf("A media do vetor eh: %.1f\n", res);
                    
    }

}


float media(float v[]){

    float soma=0.0; 
    int i;
    

    size_t n = sizeof(v)/sizeof(v[0]);

    for(i=0;i< n ;i++){

        soma = soma + v[i];

    }

    float media = (soma/n);
    return media;

}