#include <stdio.h>
#include <math.h>

int main () {
    
    float x1;
    float y1;
    float x2;
    float y2;

    scanf("%f %f",&x1, &y1);    
    scanf("%f %f",&x2, &y2);
    
    double ponto_x = pow( (x1 - x2) , 2);
    double ponto_y = pow( (y1 - y2) , 2);

    double distancia = ponto_x + ponto_y;    
    double raiz_distancia = sqrt(distancia);    

    printf("%.4lf", raiz_distancia);
    
    return 0;
    
}