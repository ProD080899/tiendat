#include<stdio.h>
#include <math.h>

int demchuso(int n)
{
	int count =0;
		while(n>0)
		{
		count ++;	
		n/= 10;
	
		}
	return count;
}

int demchusole(int n)
{
	int count =0;
	while(n>0)
	{
		int i;
		i=  n%10;
		n/= 10;
	
		if(i%2!=0)
		{
			count ++;
		}
	
	}
	return count;
}
int tongchuso(int n)
{
	int s=0;
	while(n>0)
	{
		s = s+ n%10;
		n/=10;
	}
	return s;
}
int main()
{
	long n;
	printf("nhap n: ");
	scanf("%d", &n);
	
	printf("tong chu so: %d", demchuso(n));
	
	printf("\ntong chu so le: %d", demchusole(n));
	
	printf("/ntbc cac chu so: %.3f", (double)(tongchuso(n))/(demchuso(n)));
	
}
