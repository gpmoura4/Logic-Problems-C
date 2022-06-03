#include <stdio.h>

 
int main() {
    
    int numeros[99];
    int n_entradas;
    int contador, contador2;
    
    float entradas_usuario[10];
    int entradas_limite;
    int repeticao;
 
    float num_referente;
    float numero_Maisprox; //transformar em array


    //Numero de entradas que o usuario quer (2)
    scanf("%d",&n_entradas);

    //Leitura dos numeros que o usuario colocar (duas vezes)
    for(contador = 0; contador < n_entradas; contador++) {
        
        //Lista de numeros de entradas que o usuario deseja (4)
        scanf("%d",&numeros[contador]);
    
    
        //Numero que vai ser de referencia pra ver qual é o mais próximo a ele (2.5), 
        //                                                                     (1.5)
        scanf("%.1f",&num_referente);

            //Números a serem comparados
            for(contador2 = 0; contador2 < numeros[contador]; contador2++) {

            scanf("%f",&entradas_usuario);

            //Restrição 1 positivo e negativo, restrição 2 repetição

                    //POSITIVO/NEGATIVO
                if (entradas_usuario[contador2] - num_referente  
                < num_referente - numero_Maisprox ) {
                    numero_Maisprox = entradas_usuario[contador2];
                }

                else {
                   if(num_referente - entradas_usuario[contador2]
                   < num_referente - numero_Maisprox) {
                       numero_Maisprox = entradas_usuario[contador2];
                   }
                
                }  
        }

    }  

    printf(".1%f",num_Maisprox);
    
    
    
    return 0;

}