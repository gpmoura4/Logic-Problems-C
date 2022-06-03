#include <stdio.h>
#include <string.h>

int main (){

    int linha_I, colu_I, linha_F, colu_F;
    int n, m, i, j, cont, stop = 0;
    char lab[100][100], N, F;
    N = 'I';
    F = 'F';

    char res_S = "S";
    char res_N = "N";

    scanf("%d %d", &n, &m);
    
    for(i = 1; i < n+1; i++){

        for(j = 1; j < m+1; j++){

            scanf("\n%c", &lab[i][j]);
            if (lab[i][j] == N){
                linha_I = i;
                colu_I = j;
               
            }
            if (lab[i][j] == F){
                linha_F = i;
                colu_F = j;
             
            }
        
        }
    
    }

    cont = 0;

    while(colu_I != colu_F || linha_I != linha_F) {

        if(lab[linha_I][colu_I+1] == 'B' || lab[linha_I][colu_I+1] == 'F'){
            colu_I++;
        }
        else if(lab[linha_I-1][colu_I] == 'B' || lab[linha_I-1][colu_I] == 'F'){
            linha_I--;
        }
        else if(lab[linha_I+1][colu_I] == 'B' || lab[linha_I+1][colu_I] == 'F'){
            linha_I++;
        }
        else if(lab[linha_I][colu_I-1] == 'B' || lab[linha_I][colu_I-1] == 'F'){
            colu_I--;
        }
        
   
        cont++;

        if(cont == 100)
        {
            stop = 1;
            break;
        }
    }

    if(stop == 1){
        printf("%c",res_N);
    }
    else{
        printf("%c",res_S);
    }
    return 0;

}