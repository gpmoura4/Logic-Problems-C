#include <stdio.h>
#include <math.h>

int main () {

    int segundos_usuario;

    int horas;
    int minutos;
    int segundos;



    scanf("%d",&segundos_usuario);
                //140153
    horas = segundos_usuario / 3600;
    
    int resto_horas = segundos_usuario - (horas * 3600);
    
    minutos = resto_horas/60;
    
    segundos = resto_horas - (minutos * 60);
    
    printf("%d:%d:%d",horas,minutos,segundos);
    
    return 0;
    
}