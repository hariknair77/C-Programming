# include <stdio.h>
// Enter Y/N and print it
// find the largest factor of p less than or equal to n
void main()
{
    int n=5,i;
    float p;
    char val[2];

    printf ("Enter Y/N");
    scanf("%s",&val);

    printf("%d",val);

    printf("\nEnter p:");
    scanf("%lf",&p);
    printf("\nEnter n:");
    scanf("%d",&n);

    for (i=n ; p%i != 0; ++i )

    printf("%d",i);
}
