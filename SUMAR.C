#include<stdio.h>
#include<conio.h>
void main()
{
 int n,k,i,sum,a[100];
 printf("Enter the size of array");
 scanf("%d",&n);
 printf("Enter %d elements",n);
 for(i=1;i<=n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter the number upto which you want to find the sum of array elements");
 scanf("%d",&k);
 for(i=1;i<=k;i++)
 {
 sum = sum+a[i];
 }
 printf("Sum of first %d elements is %d",k,sum);
}