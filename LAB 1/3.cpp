#include<stdio.h>

int main()
{
	float salary;
	printf("Input the salary: ");
	scanf("%f",&salary);
	
	float amount;
	
	if(salary>0 && salary<=15000)
	{
		amount = salary + 0.15*salary;
	}
	else if(salary>15000 && salary<30000)
	{
		amount = salary + 2250 + 0.18*salary;
	}
	else if(salary>30000 && salary<50000)
	{
		amount = salary + 5400 + 0.22*salary;
	}
	else if(salary>50000 && salary<80000)
	{
		amount = salary + 11000 + 0.27*salary;
	}
	else if(salary>80000 && salary<150000)
	{
		amount = salary + 11000 + 0.33*salary;
	}
	else
	{
		printf("Salary out of range");
		return -1;
	}
	
	printf("Amount:%.2f",amount);
	return 0;
}
