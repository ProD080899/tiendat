#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool nto(int n)
{
	if(n<2)
	{
		return false;
	}
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int cp(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(i*i==n)
		{
			return 1;
		}
	}
	return 0;
	
}
void lkcp(int n)
{
	int i=1;
	printf("\nlke %d so cp dau tien: ");
	while(n>0)
	{
		if(cp(i)){ 
			printf("%5d",i);
			n--;
		}
		i++;
	}
}
void lke(int n)
{
	int i=2;
	printf("\nliet ke so nto :");
	while(n>0)
	{
		if(nto(i))
		{
			printf("%5d", i);
			n--;
		}
		i++;
	}
}

bool tongnto(int n)
{
	int s=0;
	while(n>0)
	{
		s = s+ n%10;
		n/=10;
		
	}
	if(nto(s))
	
		return true;
	
return false;	
}

bool chua_nto(int n){
	int c;
	
	while(n>0)
	{
		c = n%10;
		n/=10;
		if(nto(c))
{
		return true;
}
	}
 
return false;	
} 
int main()
{
	
	  long n,i;
	printf(" lietke: ");
	
		
		for(i=20000000;i<=77777777;i++)
		{
			if(nto(i) && chua_nto(i)){
				
				printf("%5ld  ,", i);
			}
			
				
	
	}
	
	

}
