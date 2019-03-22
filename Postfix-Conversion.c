#include <stdio.h>
# include <ctype.h>
struct stack
{
char data[20];
int top;
};
void PUSH(struct stack *st,char ch)
{
	st->data[++(st->top)]=ch;
}
char POP(struct stack *st)
{
	if (st->top!=-1)
		return st->data[st->top--];
	else return -1;
}
int priority(char ch)
{
	switch (ch)
	{
	case '(': return 0; break;
	case '+':
	case '-': return 1; break;
	case '*':
	case '/': return 2; break;
	case '^': return 3; break;
	}
}
void main()
{
	char exp[30],ch,tmp;
	struct stack s;
	s.top=-1;
	printf("Enter the Expression   : ");
	fgets (exp,30,stdin);
	printf("\nThe Postfix Expression : ");
	for (int i=0;exp[i]!='\0';i++)
	{
	ch=exp[i];
	if(isalnum(ch))
		printf("%c",ch);
	else if (ch=='(')
		PUSH(&s,ch);
	else if (ch==')')
	{
		tmp=POP(&s);
		while (tmp!='(')
			{
			printf("%c",tmp);
			tmp=POP(&s);
			}
	}
	else
	{
	int p1=priority (s.data[s.top]),p2=priority (ch);
	if (p2==3 && p1==p2)
	{
		PUSH(&s,ch);
		continue;
	}
	while (p1>=p2)
	{
		printf("%c", POP(&s));
		p1=priority (s.data[s.top]);
	}
	PUSH(&s,ch);
}
}
while (s.top>-1)
	printf("%c",POP(&s));
}


