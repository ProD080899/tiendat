#include<stdio.h>
#include <stdbool.h>

/*int nto(int n)
{
	int i, d=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			d++;
		}
		if(d==2)
		return 1;
		else
		return 0;		
	}
	return 0;
}
*/
bool nto(int n)
{
	if(n<2){
		return false;
	}
	int i;
	for(i=2;i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main()
{
	long n;
	do
	{
	printf("nhap n(8 chu so): ");
	scanf("%d", &n);		
	}
	while(n<9999999);
	if(nto(n)==1)
	{
		printf("\nn la so nto");
	}
	else
	{
		printf("\nn ko la so nto");
	}
	while(n>9999999)
	{
		int a;
		int c=a;
		a= n%10;
		n/=10;
		
		if(nto(c)==1)
		{
			printf("\ncac chu so cua n la nto");
		}
		else
		{
			printf("\ncac chu so cua n ko la nto");
		}
	}
	return 0;
}
