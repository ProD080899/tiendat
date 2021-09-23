#include<stdio.h>

int main()
{
	int h;
	 printf("nhap h: ");
	 scanf("%d", &h);
	 
	 if(h>0)
	 {
	 	int i,j;
	 	for(i=1;i<=h;i++)
	 	{
	 		for(j=1;j<=(2*h);j++)
	 		{
	 			if(abs(h- j)<= (i-1))
	 			{
	 			
	 				printf("%4d", i- abs(h - j));
				 }
				 else
				 {
				 	printf("    ");
				 }
			 }
			 printf("\n");
		 }
	 }
}
