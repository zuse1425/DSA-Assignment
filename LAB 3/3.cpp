#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[100] = "Data Structures";
	char str2[] = " and Algorithms";
	
	cout<<"\nBefore Concatenation:\n"<<"str1:"<<str1<<"\nstr2:"<<str2<<"\n"<<endl;
	strcat(str1,str2);
	
	
	cout<<"After Concatenation:\n"<<"str1:"<<str1<<"\nstr2:"<<str2<<"\n"<<endl;
	char* final = strcat(str1,str2);
	
	cout<<"After Concatenation:\n"<<final<<endl;
	
	return 0;
}
