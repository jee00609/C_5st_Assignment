#include<stdio.h>

int Pascal(int a);

int main()
{
	int a;

	printf("ธ๎มู?\n");
	scanf("%d",&a);

	Pascal(a);

	return 0;
}

int Pascal(int a)
{
	double c[100][100]={0,1};
	int i;
	int j;


	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			c[i][j]=c[i-1][j-1]+c[i-1][j];
			printf("%.0f ",c[i][j]);
		}
		printf("\n");
	}

	return a;
}
