#include <stdio.h>
#define TAM 10
int main () {

    int i, aux;
    int numeros[10];

    printf("\n--- Insira os numeros da lista ---\n");
    fflush(stdin);

    for(i=0; i<10; i++)
    {
        scanf("%d",&numeros[i]);
    }

    printf("--- A lista eh ---\n");

    for(i=0; i<TAM; i++)
    {
        printf("%5d",numeros[i]);
    }

    int contador;

    for(contador = 0; contador < (TAM - 1); contador++)
    {

        //TAMANHO - 1  porque a ultima posicao nao eh comparada com a prox, ja que a prox eh vazia
        for(i=0;i<(TAM - 1);i++)
            {
                if(numeros[i] > numeros[i+1])
                {
                    aux = numeros[i];
                    numeros[i]=numeros[i+1];
                    numeros[i+1] = aux;
                }
            }
    }
    
    return 0;
}