#include <stdio.h>
#include<math.h>

int sum(int n)
{
	int s=0;
	while(n>0)
	{
		s= s+ n%10;
		n/=10;
	}
	return s;
}
void ptich(int n)
{
	int i=2;
	while(n>1)
	{
		if(n%i==0)
		{
			printf("%d", i);
			if(n!=i)
			{
				printf(" x ");
			}
			n/= i;
		}
		else
		i++;
	}
}
int main()
{
	int n;
	do{
	printf("nhap n >0:");
	scanf("%d", &n);
} while(n<1);

printf("tong cac chu so : %d", sum(n));
printf( "\n %d = ", n);
ptich(n);
}
	


		

