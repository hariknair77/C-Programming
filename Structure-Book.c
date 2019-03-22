# include <stdio.h>
struct book
{
    int id;
    float price;
    char title[25];
    char authorname[15];
};
void print(struct book a[10],int n)
{   for (int i=0;i<n;i++)
    {   printf("\n\nID :%d",a[i].id);
        printf("\nTitle :%s",a[i].title);
        printf("\nAuthorname :%s",a[i].authorname);
        printf("\nPrice : %.2f\n",a[i].price);
}}
void main()
{
    struct book a[10];
    int n;
    printf("Enter the No of Entry: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {   printf("\n\nEnter the book ID:");
        scanf("%d",&a[i].id);
        printf("Enter the book Title:");
        scanf("%s",a[i].title);
        printf("Enter the Author name:");
        scanf("%s",a[i].authorname);
        printf("Enter the Price:");
        scanf("%f",&a[i].price);
    }
    print(a,n);
}
