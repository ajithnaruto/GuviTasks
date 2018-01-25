#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter a number to find whether it is odd or even");
scanf("%d",&n);
if(n%2==0)
{
printf("Even");
}
else
{
printf("Odd");
}
}