# include <stdio.h>

void main()
{
int a,b;
char ch;
printf("Enter the opeartor :");
scanf("%c",&ch);
printf("Enter operands :");
scanf("%d %d",&a,&b);
switch(ch)
{
	case '+': printf("%d %c %d = %d",a,ch,b,(a+b));
		break;
	case '-': printf("%d %c %d = %d",a,ch,b,(a-b));
		break;
	case '*': printf("%d %c %d = %d",a,ch,b,(a*b));
		break;
	case '/': printf("%d %c %d = %f",a,ch,b,((float)a/b));
		break;
	case '%': printf("%d %c %d = %d",a,ch,b,(a%b));
		break;

	default : printf("Wrong input of operator....");
}
printf("\n");
}
