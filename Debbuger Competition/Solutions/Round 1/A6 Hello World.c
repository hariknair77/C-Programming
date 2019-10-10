# include <stdio.h>
# include <stdlib.h>

int main(void)
{
    int i=6;
    if (printf("Hello World")!=0)
        printf("\na");
    if (i=5)
        printf("\nb");  //change
    if (!6)
        printf("\nc");

    while (!!i--)
      printf("\n%d",i);
}
