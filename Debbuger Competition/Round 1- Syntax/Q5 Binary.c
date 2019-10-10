# include <stdio.h>

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 < 8; i > 0; i = i / 2)
        (n && i)? printf("1"): printf("0");
}

int main(void)
{
    printf ("Binary(4) = ")
    bin(4);
    printf("\nBinary(7) = ");
    bin(7);
}
