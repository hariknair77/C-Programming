# include <stdio.h>
# include <stdlib.h>
struct node
{
	int coeff;
	int pow;
	struct node *next;
}*p1='NULL',*p2='NULL',*res='NULL';

void insertion1()
{
    printf("\n ---- EXPRESSION 1 ----");
    int ch=1;
    while (ch==1)
    {
        struct node *p=(struct node*) malloc(sizeof(struct node));
        printf("\nPower      : ");
        scanf("%d",&(p->pow));
        printf("Coefficient: ");
        scanf("%d",&(p->coeff));
        p->next=p1;
        p1=p;
        printf("\nEnter 1 for Re-Enter :");
        scanf("%d",&ch);
    }
}
void insertion2()
{
    printf("\n ---- EXPRESSION 2 ----");
    int ch=1;
    while (ch==1)
    {
        struct node *p=(struct node*) malloc(sizeof(struct node));
        printf("\nPower      : ");
        scanf("%d",&(p->pow));
        printf("Coefficient: ");
        scanf("%d",&(p->coeff));
        p->next=p2;
        p2=p;
        printf("\nEnter 1 for Re-Enter :");
        scanf("%d",&ch);
    }
}
void display(int ch)
{
	struct node *tmp;
    if(ch==1)
       tmp=p1;
    else if (ch==2)tmp=p2;
    else tmp=res;
	printf("\nPolynomial : ");
	for (; tmp!='NULL' ; tmp=tmp->next)
		printf("   C=%d P:%d",(tmp->coeff),(tmp->pow) );
}
void addition()
{
    struct node *t1=p1,*t2=p2;
    while(t1!='NULL' || t2!='NULL')
	{
        struct node *result=(struct node*) malloc (sizeof(struct node));
	    if (t1!='NULL' && t2!='NULL')
        {
            if((t1->pow) > (t2->pow))
            {
                result->pow = t1->pow;
                result->coeff = t1->coeff;
                t1 = t1->next;
            }
            else if((t1->pow) < (t2->pow))
            {
                result->pow = t2->pow;
                result->coeff = t2->coeff;
                t2 = t2->next;
            }
            else
            {
                result->pow = t1->pow;
                result->coeff = (t1->coeff)+(t2->coeff);
                t1 = t1->next;
                t2 = t2->next;
            }
        }
        else if (t1!='NULL')
        {
            while(t1!='NULL')
            {
            result->pow = t1->pow;
            result->coeff = t1->coeff;
            t1 = t1->next;
            }
        }
        else
        {
            while(t2!='NULL')
            {
            result->pow = t2->pow;
            result->coeff = t2->coeff;
            t2 = t2->next;
            }
        }
        result->next=res;
        res=result;
        }
	}
void multiply()
{
    for(struct node *t1=p1 ;t1!='NULL';t1=t1->next)
    {
        for(struct node *t2=p2; t2!='NULL';t2=t2->next)
        {
            int power= (t1->pow + t2->pow);
            int coef= (t1->coeff * t2->coeff);
            int flg=-1;
            for(struct node *tmp=res;tmp!='NULL';tmp=tmp->next)
            {       if((tmp->pow)==power)
                    {
                    flg=0;
                    (tmp->coeff)+= coef;
                    break;
                    }
            }
            if(flg==-1)
            {
                    struct node *result=(struct node*) malloc (sizeof(struct node));
                    result->coeff=coef;
                    result->pow=power;
                    result->next=res;
                    res=result;
            }
        }
    }
}
void main()
{
    insertion1();
    insertion2();
    display(1);
    display(2);
    //addition();
    multiply();
    display(3);

}
