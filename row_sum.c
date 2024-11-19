//Write a program to display sum of all elements in each row//
#include<stdio.h>
main()
{
	int a[10][10], b[10][10],m, i, j, n, sum[10]=0;
	
	printf("Enter m and n values:");
	scanf("%d %d", &m,&n);
		printf("Enter the elements:");
		for(i=0; i<m; i++)
		{
			for(j=0; j<n; j++)
			scanf("%d", &a[i][j]);
		}

		for (i=0; i<m; i++)
		{

			for (j=0; j<n; j++)
			{
 

					sum[i]+=a[i][j];


			}
		printf("The sum is:%d\n", sum);
}
}