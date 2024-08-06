#include<stdio.h>
#include<conio.h>

void main()

{
	int A,B,C,D;
	printf("Enter a value of A  :  ");
	scanf("%d",&A);
	printf("Enter a value of B  :  ");
	scanf("%d",&B);
	printf("Enter a value of C  :  ");
	scanf("%d",&C);
	printf("Enter a value of D  :  ");
	scanf("%d",&D);
	
	
	if(A>B)//A IS MAX
	{
		if(A>C)//A IS MAX
		{
			if(A>D)//A IS MAX
			{
				printf("A is maximum");
			}
			else// B IS MAX
			{
			 	if(B>C)//B IS MAX
				 {
				 	printf("B is maximum");
				 }	
				 else//B IS MAX
				 {
				 	printf("B is maximum");
				 }
			}	
		}
		else//c is max
		{
			if(C>B)//c is max
			
			{
				if(C>A)
				{
					if(C>D)	
					{
						printf("C is maximum");
						}
						else
						{
							}	
				}
				else
				{
				printf(" ");
				}
				
				
			
					
			}
			else 
			{
			
			}
		}
	}
	else//d is max
	{
		if(D>B)
		{
			if(D>C)
			{
				if(D>A)
				{
						printf("D is maximum");
					}	
					else
					{
						printf("D is maximum");
					}
			}
			else
			{
				
			}			printf("D is maximum");	
		}
		else
		{
			printf("D is maximum");
		}
	}
}