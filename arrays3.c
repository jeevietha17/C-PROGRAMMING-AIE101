#include<stdio.h>
main()
{

int i, a[10], b[10],j , n;
printf("How many elements?:");
scanf("%d", &n);
for (i=0; i<n; i++)
{
scanf( "%d", &a[i]);
}
for (j=0; j<n; j++)
{
b[j]=a[n-j-1];
}
for (j=0; j<n; j++)
{
printf("%d\t", b[j]);
}
}
