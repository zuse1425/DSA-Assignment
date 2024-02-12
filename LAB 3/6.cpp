#include<iostream>
using namespace std;
#include<string.h>

int main()
{
	const char* string1[] = {"LAB "};
	const char* string2[] = {"ASSIGNMENT "};
	const char* string3[] = {"- 3"};
//	char arr[] = {'L','A','B',' ','A','S','S','I','G','N','M','E','N','T',' ','-',' ','3'};
	const char** arr1[] = {string1,string2,string3};
	
	for(int i = 0; i < sizeof(*arr1); i++)
	{
		cout << (**(arr1+i)) ; 
	}
	
	
	return 0;
}
