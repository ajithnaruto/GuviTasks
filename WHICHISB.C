#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("%d is largest of three",a);
}
else if(b>c)
{
printf("%d is largest of three",b);
}
else
{
printf("%d is largest of three",c);
}
}