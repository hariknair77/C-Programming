# include <stdio.h>
void main()
{
    struct t
    {
        int hr;
        int min;
        int sec;
    }t1,t2;
    printf("Enter first time (hh-mm-ss)\n");
    scanf("%d %d %d",&t1.hr,&t1.min,&t1.sec);
    printf("Enter second time (hh-mm-ss)\n");
    scanf("%d %d %d",&t2.hr,&t2.min,&t2.sec);
    printf("The Difference in time is (hh-mm-ss): ");
    for (int *p1=&t1,*p2=&t2,i=0;i<3;i++,p1++,p2++)
        printf("%d\t",(*p1-*p2));
}
