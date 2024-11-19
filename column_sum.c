//Write a program to display sum of all elements in each column//
#include<stdio.h>
int main()
{	
 	int a[10][10], i, j, m, n;
        int sum[10]={0};
	
	printf("Enter the values of m and n:");
   	scanf("%d %d", &m,&n);

	printf("Enter the elements of the array:");
	for(i=0; i<m; i++)
         {
           for (j=0; j<n; j++)
           scanf("%d", &a[i][j]);
         }


	for(j=0; j<n; j++)
         {
           sum[j]=0;
           for (i=0; i<m; i++)
        {
            sum[j] += a[i][j];
        }
          }	
 


           for (j=0; j<n; j++)
        printf("The sum of elements in column %d is: %d\n", j + 1, sum[j]);

}

	