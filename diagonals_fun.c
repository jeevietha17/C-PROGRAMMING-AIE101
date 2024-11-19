//write a program to find sum of diagonals using functions//
#include<stdio.h>
int sumarr(int b[], int n);
main()
{
int s,n,i,a[10];
printf("Enter the value of n:");
scanf("%d", &n);
printf("Enter the elements of the array:");
for (i=0; i<n; i++)
scanf("%d", &a[i]);
s=sumarr(a,n);
printf("%d", s);
}
int sumarr(int b[], int n)
{
int i, sum=0;
for(i=0; i<n; i++)
sum=sum+b[i];
return sum;
}