#include <iostream>
using namespace std;

void merge(int arr1[], int size1, int arr2[], int size2, int ans[]) 
{
    int size = size1 + size2;
    int k = 0;
    int j = 0;
    int i = 0;
    while (i < size) 
    {
        if (k < size1 && j < size2) 
        {
            if (arr1[k] < arr2[j]) 
            {
                ans[i] = arr1[k];
                k++;
            } 
            else if (arr1[k] > arr2[j]) 
            {
                ans[i] = arr2[j];
                j++;
            } 
            else if (arr1[k] == arr2[j])
            {
                ans[i] = arr1[k];
                k++;
            }
        } 
        else 
        {
            if (k == size1) 
            {
                ans[i] = arr2[j];
                j++;
            } 
            else if (j == size2) 
            {
                ans[i] = arr1[k];
                k++;
            }
        }
        i++;
    }
}


/*
Input:
6
1 3 6 11 12 17 
5
2 8 12 16 19 

Output: 1 2 3 6 8 11 12 12 16 17 19 
*/

int main()
{
	int size1;
	cout<<"Input the size of the 1st array"<<endl;
	cin >> size1;

	int arr1[size1];
	cout<<"Input elements of the 1st array"<<endl;
	for (int i = 0; i < size1; i++)
	{
		cin >> arr1[i];
	}

	int size2;
	cout<<"Input the size of the 2nd array"<<endl;
	cin >> size2;

	int arr2[size2];

	cout<<"Input elements of the 2nd array"<<endl;
	for (int i = 0; i < size2; i++)
	{
		cin >> arr2[i];
	}

	int ans[size1+size2];

	merge(arr1, size1, arr2, size2, ans);

	cout<<"Resultant Merged Sorted Array"<<endl;
	for (int i = 0; i < size1 + size2; i++)
	{
		cout << ans[i] << " ";
	}

	cout << endl;

}
