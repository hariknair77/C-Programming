# include <stdio.h>
# include <stdlib.h>
# include <string.h>
void insert(char st[50], char sub[20],int pos,int ch)
{
    char new[50];
    int flag=0,i,j,k;
    for (i=0,j=0;i<=(strlen(st)-2);i++,j++)
    {   if (i==pos && flag==0)
        {   flag=-1;
            for (k=0;k<=(strlen(sub)-2);k++,j++)
                new[j]=sub[k];
        }
        else
            new[j]=st[i];
    }
if (ch==0)  printf("The new String after insertion is:  ");
else        printf("The new String after Replacement is:  ");
for (i=0;i<j;i++)
    printf("%c",new[i]);
}

void delete(char st[50],int pos,int n,int ch)
{
int flag=0;
char new[50];
for (int i=0,k=0;i<(strlen(st)-1);i++)
{
    if (i==pos && flag==0)
    {   flag=-1;
        for (int j=0;j<n;j++,i++);
    }
    else
    {   new[k]=st[i];
        k++;
    }
}
if (ch==0)
{   printf("The new String after insertion is:  ");
    for (int i=0;i<(strlen(new)-1);i++)
    printf("%c",new[i]);
}
else
    {char sub[20];
     printf("%s",new);
     printf("Enter the sub-String to add : ");
     scanf("%s",&sub);
     insert(new,sub,n,1);
}
}
void main()
{
char st[50],sub[20],subr[20];
int n,flag=0,pos,ch;

printf("Enter the String: ");
fgets(st,50,stdin);
printf("\nEnter the position where new string is to be inserted : ");
scanf("%d",&pos);
printf("Enter the sub-String to add : ");
scanf("%s",&sub);
pos--;
insert(st,sub,pos,0);
printf("\n\nEnter the no of character to be removed");
scanf("%d",&n);
printf("Enter the position where %d characters are to be deleted : ",n);
scanf("%d",&pos);
pos--;
delete(st,pos,n,0);
printf("\n\nEnter the sub-String to check : ");
scanf("%s",&sub);
for (int i=0;i<(strlen(st)-strlen(sub));i++)
{
    if (st[i]==sub[0])
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
            {delete (st,i+1,strlen(sub)-1,1);
             break;
            }
    }
}
if (flag!=0)    printf("Match not found ");
}
