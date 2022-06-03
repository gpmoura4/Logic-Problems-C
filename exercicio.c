#include <stdio.h>

int main () {
    
    int dent_interv = 0, fora_interv = 0;
    int i, limite = 1000; 
    int valor;

    for (i = 0; i < limite; i++) {

        scanf("%d",&valor);

        if(valor >= 10 && valor <=20) {
            dent_interv++;
        }

        else {
            fora_interv++;
        }

    }
    
    printf("%d\n",dent_interv);
    printf("%d\n",fora_interv);
    
    return 0;
}