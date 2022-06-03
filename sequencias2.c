#include <stdio.h>

int sequencia(int n);

    
    
    
    
int main () {

    int n, ntotal;

    scanf("%d",&n);
    ntotal = sequencia(n);

    printf("A sequencia total eh: %d", ntotal);
    return 0;
}
    
int sequencia (int n) {

    int contador=0;
    int x,y;

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

