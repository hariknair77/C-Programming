//illustrate pascals triangle of n lines using REcursive Function
#include <stdio.h>

void main (void)
{
    int  n = 0 ;
    int m = 0 ;
    int k  = 0 ;

    scanf("%d" , &n);

    for(k = 1  ; n >= k ; k++  )
    {
        printf("\n ");
        for (int  i=0 ; i< ((n-k+1)/2) ; i++ )
            printf(" ");
        for(  m = 1 ; k > m   ; m++ )
        {
            long f = pascal(k , m ) ;
            printf("%ld " , f);
        }
    }
     return 0;
}

long pascal( int n , int i )
{
    if(n == 1 && i == 1 )
        return 1 ;
    else
        return pascal(n,i) + pascal(n-1,i-1);
}
