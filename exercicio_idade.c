#include <stdio.h>

int main () {

    int idade;
    
    scanf("%d",&idade);
    
    int anos = (idade/365);
    int resto = idade - (anos * 365); 
    int meses = (resto/30);
    int dias = resto - (meses*30);

    printf("%d\n",idade);
    printf("%d\n",anos);
    printf("%d\n",meses);
    printf("%d\n",dias);

    return 0;
}