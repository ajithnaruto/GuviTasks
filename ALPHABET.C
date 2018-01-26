#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("Enter a character");
scanf("%c",&a);
if(a>='a'&&a<='z'||a>='A'&&a<='Z')
{
printf("Alphabet");
}
else
{
printf("Not Alphabet");
}
}