#include<stdio.h>
main()
{
int m,n,i,j,a[10][10],b[10][10], c[10][10];
printf("Enter the values of m and n:");
scanf("%d %d", &m,&n);
printf("Enter the values for first matrix:");
for (i=0; i<m; i++)
{
for (j=0; j<n; j++)
{
scanf("%d", &a[i][j]);
}
}

printf("Enter the values for second matrix:");
for (i=0; i<m; i++)
{
for (j=0; j<n; j++)
{
scanf("%d", &b[i][j]);
}
}

for(i=0; i<m; i++)
{
for (j=0; j<n; j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}

printf("Sum of the matrices:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
