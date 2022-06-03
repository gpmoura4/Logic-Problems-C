#include <stdio.h>
#include <math.h>

int main () {
    
    int horas;
    int velocidade;
    
    
    scanf("%d",&horas);
    scanf("%d",&velocidade);
    
    
    float distancia = (horas * velocidade);
    float km_l = 12;
    float litros = distancia/km_l;
    
    printf("%.3f", litros);
    
    
    return 0;
    
}