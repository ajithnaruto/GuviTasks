#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,c=1;
printf("Enter the number and its power");
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
{
c = c * a;
}
printf("Ans = %d",c);
}