#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int nto(int n)
{
	int i;
	if(n<2)
	{
		return 0;
	}
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}	

int main()
{
	int a, b;
	printf("nhap a, b: ");
	scanf("%d%d", &a, &b);
	
	if(a<b )
	{
		int j;
		for(j=a;j<=b;j++)
		{
			if(nto(j))
			{
				printf("%5d", j);
			}
		}
	}
	else
	{
		printf("nhap a < b");
	}
	
	return 0;
}
