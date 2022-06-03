#include<stdio.h>

 
int main() {
    

     int numeros[10];
     int n_entradas;
     int contador_fibo, contador;
     int contador1, contador2;
     int fibo[46];
     int positivo;
    
    
    
    //Pegar quantos numeros o usuario quer
    scanf("%d",&n_entradas);

        for (contador = 0; contador < n_entradas; contador++) {
        
            scanf("%d",&numeros[contador]);
    
        } 

    //Lista de Fibonacci
    for (contador_fibo = 0; contador_fibo <= 46; contador_fibo++) {

        if (contador_fibo < 2) {
            fibo[contador_fibo] = contador_fibo;
        }

        // Fib(n) = Fib(n-1) + Fib(n-2) para n>=2.
        else  {
             fibo[contador_fibo] = (fibo[contador_fibo - 1]) + (fibo[contador_fibo - 2]);    
        }
 
    }      

      
                                               //3
            for(contador = 0; contador < n_entradas; contador++) {
                  
            positivo = 0;
            
                        //0
                for (contador1 = 0 ;contador1 < 46; contador1++)   {
                 
                    for(contador2 = 0; contador2 < 46; contador2++) {
                                                                    //40
                        if (fibo[contador1] + fibo[contador2] == numeros[contador]) {
                        
                        positivo = 1;
                        break;
                        
                    
                        }

                    }       
                    

                }



                if (positivo == 1) {
                    printf("S\n");
                   
                }

                else {
                    printf("N\n");
                }

            }
               




    return 0;
}