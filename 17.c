#include <stdio.h>
#include<stdbool.h>

bool kotang(int n)
{
	int a,b;
	int i = 10000;
	a= n/i;
	n= n% i;
	i = i/10;	
	while(n>0)
	{	
		b = n/i;
		n= n%i;
		i /= 10;
		if(b>a)
		{
			return false;
		}
		
	}
	return true;
}


int main()
{
	
	int a;
	
	for(a=10000;a<=99999;a++)
	{
		if(kotang(a))
		{
			printf("%5d");
		}
	}
	return 0;
}
