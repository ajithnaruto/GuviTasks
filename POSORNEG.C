#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("Enter a number to check whether it is positive or negative");
scanf("%d",&n);
if(n==0)
{
printf("Zero");
}
else if(n<0)
{
printf("Negative");
}
else
{
printf("Positive");
}

}