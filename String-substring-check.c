# include <stdio.h>
# include <stdlib.h>
# include <String.h>
void main()
{
char st[50],sub[20];
int flag;
printf("Enter the String: ");
fgets(st,50,stdin);
printf("\nEnter the sub-String to check : ");
scanf("%s",&sub);
for (int i=0;i<(strlen(st)-strlen(sub));i++)
{    if (st[i]==sub[0])
    {   flag=0;
        for (int j=i+1,k=1;k<strlen(sub)-1;j++,k++)
        {
            if (st[j]!=sub[k])
            {
                flag=-1;
                break;
            }
        }
        if (flag==0)
            {printf("\nThe position is %d",(i+1));
             break;
}     }      }
if (flag!=0)    printf("\nMatch not found ");
}
