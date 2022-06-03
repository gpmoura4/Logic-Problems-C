#include <stdio.h>
#include <math.h>

int main () {

    int N, par;
    int quadrado;
    scanf("%d,&N");

    for(par = 1; par <= N; par++) {

        if(par%2 == 0)
        quadrado = pow(par,2);
        printf("%d^2=%d\n",par, quadrado);
    
    }

    return 0;
}