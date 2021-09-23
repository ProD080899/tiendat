#include <stdio.h>

int main()
{
	int h;
	printf("nhap h: ");
	scanf("%d", &h);
	
	if(h<0)
	{
		printf("nhap ko hop le");
	}
	else
	{
		int i,j;
		for(i=1;i<=h;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf(" x ", j);
			}
			printf("\n");
		}
		
	}
	
	return 0;
}
