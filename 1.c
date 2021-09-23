#include <stdio.h>

int main()
{
	int m, n;
	printf("nhap m , n: ");
	scanf("%d%d", &m,&n);
	
	if(n<0|| m<0)
	{
		printf("nhap ko hop le");
	}
	else
	{
		int i,j;
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=n;j++)
			{
				printf(" %d ", j);
			}
			printf("\n");
		}
		
	}
	
	return 0;
}
