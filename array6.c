#include<stdio.h>
main()
{
int a[10][10], sum=0, i, j;
printf("How many elements do we need?");
scanf("%d", &i);
for (j=0; j<i; j++)
{
scanf("%d", &a[j][j]);
}

for (j=0; j<i; j++)
{
sum+=a[j][j];
}

printf("Sum: %d", sum);
}
