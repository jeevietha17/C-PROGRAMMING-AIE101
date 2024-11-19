#include<stdio.h>
main()
{
int a[10], n, i;
printf("How many elements?");
scanf("%d", &n);
printf("Enter the elements:");

for (i=0; i<n; i++)
{
scanf("%d", &a[i]);
}


for (i=0; i<n; i++)
{
printf("%d\t", a[i]);
}

}