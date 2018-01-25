#include<stdio.h>
#include<conio.h>
void main()
{
char a;
printf("Enter a letter");
scanf("%s",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
{
printf("Vowel");
}
else
{
printf("consonant");
}
}