/* Program to print the below Pattern using For Loop
01
0101
010101
01010101
0101010101
010101010101
*/

#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n;
	
	printf("Enter The Number : ");
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++)
	{
		for(j=1 ; j<=n*2 ; j++)
		{
			if(j<=2*i)
			{
				if(j%2==0)
				{
					printf("1");
				}
				
				else
				{
					printf("0");
				}
			}
		}
		printf("\n");
	}
	
}
