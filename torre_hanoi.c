#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, valor;
   
    int cadeia[200][200];
    
    while(1)
    {

        cin >> n;

        if (!n) return 0;

        for (int i = 0 ; i < n; i++)
        {
            valor = 1;
            for (int j = 0 ; j < n; j++)
            {
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                {
                    cadeia[i][j] = 1;
                }
                else
                {
                    cadeia[i][j] = min(n-i, min(i+1, min(n-j, j+1)));
                }               
            }
        }

        for (int i = 0 ; i < n; i++)
        {
            for (int j = 0 ; j < n; j++)
            {
                printf("%3d", cadeia[i][j]);
                if (j < n - 1) printf(" ");
            }
            printf("\n");
        }
        printf("\n");

    }
}