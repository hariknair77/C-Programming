# include <stdio.h>
# include <string.h>
int power(int a,int b)
{
    int res=1;
    for (int i=0;i<b;i++)
        res*=a;
    return res;
}
void convert(int from , int to )
{
    char num[100];
    scanf("%s",&num);
    int i,k,tmp,len,val,dec=0;
    for (len=0;num[len]!='\0';len++);
    for(len-=1,i=0;len>=0;len--,i++)
    {
        if (isdigit(num[len])!=1)
        {
            val= (int)num[len] -87;
            if (val<0)
                val-=32;
        }
        else
            val= (int)num[len]-48;
        if(val>from)
        {
            printf("Wrong number");
            return;
        }
        dec= dec + ( val*power(from,i) );
    }
    if (to!=10)
    {
        int arr[100];
        for(tmp=dec,k=0; tmp>0; tmp/=to , k++)
            arr[k]= tmp%to;
        for (int j=k-1;j>=0;j--)
        {
            if (arr[j]>=10)
                printf("%c",(char)(arr[j]+55));
            else
                printf("%d",arr[j]);
        }
    }
    else
        printf("\n%d ",dec);
}
void main()
{
    int fromBase,toBase;
    printf("Enter Initial Base: ");
    scanf("%d",&fromBase);
    printf("Enter Final   Base: ");
    scanf("%d",&toBase);
    convert(fromBase,toBase);
}
