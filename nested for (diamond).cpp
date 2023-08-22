#include <stdio.h>

int main()
{
	int i,n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	int j,k,l,m,p,r;
	
	for(r=1;r>0;r++){
	
	for (i = 1; i <= n ; i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for ( j = 1 ; j<=2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(l=1;l<=n-1;l++)
	{
		for(m=1;m<=l;m++)
		{
			printf(" ");
		}
		for(p=1;p<=2*n-2*l-1;p++)
		{
			printf("*");
		}
		printf("\n");
	}
   }
	return 0;
}
