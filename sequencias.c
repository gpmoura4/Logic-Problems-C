#include <stdio.h>

int sequencia(int n[]);

int main () {

     
    /* x = tamanho do vetor, 
       ntotal = armazena os digitos totais de cada caso*/
    int x, y, ntotal;
    int i = 0;
    int numeros[200];

    scanf(" %d",&x);
    
    for(i=0;i<x;i++){ 

        scanf(" %d",&numeros[i]);
    }


        for(int j=1;j<=x;j++){
            
            ntotal = sequencia(numeros[j-1]);

            printf("\n\nCaso %d: %d numeros\n\n",j,ntotal);

          
        }
    return 0;
}

int sequencia (int n[]) {

    int contador=0;
    int x,y;

    for(int i=0;i<n[];i++)

    while(n >= 0)  {

        if (n == 0) {
            contador++;
            break;
        }

        x = n;

        while (0<x) {

            if(x==1) {
                contador++;
                n--;
                break;
            }
            contador++;
            x--;
            
        }
       
    }
    return contador;
}
