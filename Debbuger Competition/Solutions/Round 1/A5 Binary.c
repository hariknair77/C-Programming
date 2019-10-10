# include <stdio.h>

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 8; i > 0; i = i / 2)  //change
        (n & i)? printf("1"): printf("0");  //change
}

int main(void)
{
    printf ("Binary(4) = "); //change
    bin(4);
    printf("\nBinary(7) = ");
    bin(7);
}
