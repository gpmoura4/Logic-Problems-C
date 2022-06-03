#include <stdio.h>
#include <math.h>

int main () {
    
    int m, a, b, c;
    
    scanf("%d",&m);
    scanf("%d",&a);
    scanf("%d",&b);

    
    
    if (40<= m && m <= 110 
        && 1 <= a && a < m
        && 1 <= b && b < m
        && a != b) 
        {
            c = m - a - b;
        }

    if(a > b && a >c)
        printf("%d",a);
        
    if(b > a && b >c) 
        printf("%d", b);
        
    if(c > b && c >a)
        printf("%d",c);

    return 0;
}