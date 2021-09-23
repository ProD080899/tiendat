#include<stdio.h>
#include <stdbool.h>

bool kt_tang(int n)
{
	int a, b;
	a = n%10;
	n/=10;
	while(n>0)
	{
		b= n%10;
		if(b>a);
		return false;
	}
}
int so_dt(int n)
{
	int a=0;
	while(n>0)
	{
	a= n%10;
	n/=10;

	}
	return a;
}

int dem_so_dt(int n)
{
	int b= so_dt(n);
	int count=0;
	int c;
	while(n>0)
	{
		c = n%10;
		n/=10;
		if(c==b)
		{
			count ++;
		 } 
	}
	
	return count;
}
int main()
{
	int n;
	printf("nhap n>0: ");
	scanf("%d", &n);
	
	if(kt_tang(n))
	{
	printf("\ncac chu so sap xep tang dan!!!");
	}
	else
	{
		printf(" \ncac chu so ko dc sap xep!!!");
	}
	
		printf("\nso dau tien cua n: %d", so_dt(n));
		
		printf("\ndem so dau tien cua n: %d", dem_so_dt(n));
}
