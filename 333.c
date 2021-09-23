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

bool kogiam(int n)
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
		if(b<a)
		{
			return false;
		}
		
	}
	return true;
}
bool chan(int n)
{
	return n%2==0;
}
bool le(int n)
{
	return n%2!=0;
}
bool kttong(int n)
{
	int tchan=0;
	int tle=0;
	int c;
	while(n>0)
	{
		c = n%10;
		n/=10;
		if(chan(c))
		{
			tchan = tchan + c;
		}
		else if(le(c))
		{
			tle += c;
		}
		
	
	}
		
			return tle==tchan;
		
}
void lietke(int n)
{
	int i;
	printf("lke: ");
		for(i=11111;i<20000;i++)
		{
			if(kttong(i))
			{
				printf("%5d,  ",i);
				}	
		}
	
	}
	
int main()
{
	
	int a;
	printf("liet ke: ");
	for(a=10000;a<=20000;a++)
	{
		if(kotang(a) && kogiam(a))
		{
			printf("%5d ",a);
		}
	}
	lietke(a);
	return 0;
}
