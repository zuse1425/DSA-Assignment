#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number for factorial calculation: ");
	scanf("%d",&a);
	
	int output = 1;
	for(int i = 2; i <= a; i++)
	{
		output = i*output;
	}
	
	printf("Factorial of %d: %d",a,output);
	return 0;
}
