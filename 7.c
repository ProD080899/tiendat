#include<stdio.h>
#include <stdbool.h>
bool thuannghich(int n)
{
	int m =n;
	int s=0;
	
	while(n>0)
	{
		s = s*10 + n%10;
		n /= 10;
	}
	return s == m;
	
}
bool chiahetchok(int n, int k)
{
	if(k==0)
	{
		return false;
		}
	
		
				return n%k==0;
		
			}	

int main()
{
	int k,i;
	printf(" nhap k:" );
	scanf("%d", &k);
	for(i=10000000;i<99999999;i++)
	{
		if(thuannghich(i) && chiahetchok(i,k))
			{
				printf("%15d", i);
			}
	}
	return 0;
}
