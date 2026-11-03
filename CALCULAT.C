#include<stdio.h>
int main()
{
int a, b;
char op;
printf("enter first number:");
scanf("%c",&op);
printf("enter second number:");
scanf("%d",&b);
printf("enter operator (+,-,*,/):");
scanf("%d", &b);
switch(op)
{
case '+':
printf("result = %d", a+b);
break;
case '-':
printf("result = %d", a-b);
break;
case '*':
printf("result = %d", a*b);
break;
case '/':
if(b!=0)
printf("result = %d", a/b);
else
printf("cannot divided by zero!");
break;
default:
printf("invalid operator!");
}
return 0;
}
