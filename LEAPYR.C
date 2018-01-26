#include<stdio.h>
#include<conio.h>
void main()
{
int yr;
clrscr();
printf("Enter a year");
scanf("%d",&yr);
if(yr%4==0)
{
printf("Leap year");
}
else
{
printf("Not a leap year");
}
}