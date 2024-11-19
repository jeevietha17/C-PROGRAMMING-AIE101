#include<stdio.h>
main()
{
int m,n,i,j,a[10][10], sum=0;
printf("Enter the values of m and n:");
scanf("%d %d", &m,&n);
printf("Enter the elements:");
for (i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d", &a[i][j]);
}
}
for (i=0; i<m; i++)
{
for(j=0;j<n;j++)
{
if (i==j)
sum+=a[i][j];
}
}
printf("Sum:%d", sum);
}
