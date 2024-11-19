#include<stdio.h>
main()
{
int a[10], n , i, b, flag=0;
printf("How many elements?:");
scanf("%d", &n);
for (i=0; i<n; i++)
{
scanf( "%d", &a[i]);
}

printf("Enter an element to check:");
scanf("%d", &b);
for (i=0; i<n; i++)
{
if (b==a[i])
{
flag=1;
break;
}
}
if (flag==0)
printf("Element not found");
else
printf("Element found at index %d", i);
}
