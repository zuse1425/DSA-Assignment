#include<iostream>
#include<cmath>
using namespace std;

void displayMenu()
     {
     cout<<"'1': Addition\n";
     cout<<"'2': Subtraction\n";
     cout<<"'3': Multiplication\n";
     cout<<"'0': Exit\n";
    
     }
     int main()
     {   
         int i,j;
         int arr1[]={1,2,3,4,5};
         int arr2[]={6,7,8,9,10};
         int choice;
         do
		 {
		 	displayMenu();
		 	cout<<"Enter Choice: ";
         	cin>>choice;
			 switch (choice)
	         {
	         		case 0:
	         			break;
	                case 1:
	                	int sumarr[10];
	                	cout<<"Addition of the two arrays:";
	                     for(i=0;i<5;i++)
	                     {
	                         sumarr[i]=arr1[i]+arr2[i];
	                         cout<<sumarr[i]<<" ";
	                     }
	                     cout<<endl;
	                     break;
	                case 2:
	                	int subarr[10];
	                	cout<<"Subtraction of the two arrays:";
	                	for(i=0;i<5;i++)
	                	{
	                		subarr[i] = abs(arr1[i]-arr2[i]);
	                		cout<< subarr[i]<<" ";
						}
	                     cout<<endl;
	                     break;
	                case 3:
	                	int mularr[20];
	                	cout<<"Multiplication of the two arrays:";
	                    for(j=0;j<5;j++)
	                     {
	                         mularr[j]=arr1[j]*arr2[j];
	                         cout<< mularr[j]<<" ";
	                     }
	                     cout<<endl;
	                     break;
	                default :
	                     cout<<"Invalid Choice";
	                     break;
	         }  
     	}while(choice!=0);
     return 0;
     }
