#include<iostream>
using namespace std;

void take_input(int* arr, int n)
{
	cout<<"Input the elements"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	return;
}

int search(int* arr, int n, int k)
{
	for(int i=0; i<n; i++)
	{
		if(arr[i] == k)
		return i;
	}
	
	return -1;
}

int main()
{
	int n;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	
	int* arr = new int[n];
	take_input(arr,n);
	
	int k;
	cout<<"Enter the element to search for: "<<endl;
	cin>>k;
	
	int index = search(arr,n,k);
	
	if(index != -1)
	cout<<"The element "<<k<<" is found at position "<<index+1<<endl;
	else
	cout<<"Element not found"<<endl;
	return 0;
}
