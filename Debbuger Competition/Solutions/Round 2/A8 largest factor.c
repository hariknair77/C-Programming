# include <stdio.h>
// Enter Y/N and print it
// find the largest factor of p less than or equal to n
void main()
{
    int n=5,i;
    int p;    //change
    char val[2];

    printf ("Enter Y/N");
    scanf("%s",val);    //change

    printf("%s",val);   //change

    printf("\nEnter p:");
    scanf("%d",&p);   //change
    printf("\nEnter n:");
    scanf("%d",&n);

    for (i=n ; p%i != 0; --i );   //change    //change

    printf("%d",i);
}
