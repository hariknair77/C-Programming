# include <stdio.h>
# include <stdlib.h>
void main()
{
int a[50],new[50],n,tmp,pos,ch;
printf("Enter the Size of the Array ");
scanf("%d",&n);
printf("Enter the Array elements ");
for (int i=0;i<n;i++)
	scanf("%d",&a[i]);
printf("The Array elements are :");
for (int i=0;i<n;i++)
	printf("%d\t",a[i]);
printf("\n1.Insertion \n2.Deletion\nEnter the Choice : ");
scanf("%d",&ch);
printf("Enter the position ");
scanf("%d",&pos);
pos--;
switch(ch)
{
case 1:{    int item,flag=0;
            printf("Enter the Item to insert ");
            scanf("%d",&item);
            printf("The New Array is \n");
            for (int i=0,j=0;i<n;i++,j++)
                {
                if (i==pos && flag==0)
                    {   new[j]=item;
                        i--;
                        flag=-1;
                    }
                else
                    new[j]=a[i];
            printf("%d\t",new[j]);
                }
            break;}
case 2:{    printf("The New Array is \n");
            for (int i=0,j=0;i<n;i++,j++)
                if (i!=pos)
                {       new[j]=a[i];
                        printf("%d\t",a[i]);
                }
            break;}
default :   printf("Invalid Choice....");
}}
