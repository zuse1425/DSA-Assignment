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

//12 13 1 10 34 1 
int second_min(int* arr, int n)
{
	int min = INT_MAX,sec_min = INT_MAX;
	for(int i=0; i<n; i++)
	{
		if(arr[i]<min)
		{
			sec_min = min;
			min = arr[i];
		}
		if(arr[i]<sec_min && arr[i]>min)
		{
			sec_min = arr[i];
		}
	}
	return sec_min;
}

int second_max(int* arr, int n)
{
	int max = INT_MIN,sec_max = INT_MIN;
	
	for(int i=0; i<n; i++)
	{
		if(arr[i]>max)
		{
			sec_max = max;
			max = arr[i];
		}
		if(arr[i]>sec_max && arr[i]<max)
		{
			sec_max = arr[i];
		}
	}
	return sec_max;
}

int main()
{
	int n;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	
	int* arr = new int[n];
	take_input(arr,n);
	
	int sec_min = second_min(arr,n);
	int sec_max = second_max(arr,n);
	
	cout<<"The second minimum element is "<<sec_min<<"\nThe second maximum element is "<<sec_max<<endl;
	return 0;
}
