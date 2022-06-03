#include <stdio.h>

void change(int *px, int*py);

int main () {

    int a,b;
    scanf(" %d %d", &a,&b);

    change(&a,&b);

    printf("Valor de A: %d",a);
    printf("Valor de B: %d",b);
    return 0;
}


void change (int *px, int*py) {

    int aux;
    aux = *px;
    *px = *py;
    *py = aux;

}