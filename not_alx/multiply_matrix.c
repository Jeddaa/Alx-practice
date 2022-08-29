#include <stdio.h>
#define N 50
int main()
{
int a[N][N], b[N][N], c[N][N], m, n, p, q, sum, i, j, k;
printf("Enter the number of rows and column of Matrix a: \n");
scanf("%d %d", &m, &n);
printf("Enter the  number of rows and columns of Matrix B:\n ");
scanf("%d %d", &p, &q);
if(n != p)
{
	printf("Cannot multiply matrix because the column of the 1st matrix (%d) is not equal to the row of the second matrix (%d)\n", n, p);
}
else
{
	printf("Enter the 1st matrix: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter the second matrix: \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("The first matrix is: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("The second matrix is: \n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	printf("The result of multiplying matrices a and b is: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			sum = 0;
			for(k=0;k<n;k++)
			{
				sum += a[i][k] * b[k][j];
			}
			c[i][j] = sum;
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}
return 0;
}

