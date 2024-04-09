#include<iostream>
#include<climits>//for INT_MIN
using namespace std;

template<typename T>
class StackUsingTemplateArrays
{
	T* data;
	int nextIndex;
	int capacity;
	public:
		StackUsingTemplateArrays()
		{
			capacity = 4;
			data = new T[capacity];
			nextIndex = 0;
		}
		
		//return no. of elements in the stack
		int size()
		{
			return nextIndex;
		}
		
		bool isEmpty()
		{
			return nextIndex == 0;//Shortest way to write instead of writing if else statements
		}
		
		//insert element
		void push(T element)
		{
			if(nextIndex == capacity)
			{
				T* newData = new T[2 * capacity];
				for(int i=0;i<nextIndex;i++)
				{
					newData[i] = data[i];
				}
				capacity *= 2;
				delete [] data;
				data = newData;
			}
			data[nextIndex] = element;
			nextIndex++;
		}
		
		//delete element
		T pop()
		{
			if(isEmpty())
			{
				cout<<"Stack empty"<<endl;
				return 0;
			}
			else
			{
				nextIndex--;
				T temp = data[nextIndex];
				data[nextIndex] = 0;
				return temp;	
			}
		}
		
		T top()
		{
			if(isEmpty())
			{
				cout<<"Stack is empty"<<endl;
				return 0;
			}
			return data[nextIndex - 1];
		}
};

int main()
{
	StackUsingTemplateArrays<int> s;
	int choice;
	while(true) {
		cout << "Stack Menu:" << endl;
		cout << "1. Push" << endl;
		cout << "2. Pop" << endl;
		cout << "3. Display top element" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		
		switch(choice) {
			case 1:
				int element;
				cout << "Enter element to push: ";
				cin >> element;
				s.push(element);
				break;
			case 2:
				cout << "Popped element: " << s.pop() << endl;
				break;
			case 3:
				cout << "Top element: " << s.top() << endl;
				break;
			case 4:
				cout << "Exiting..." << endl;
				exit(0);
			default:
				cout << "Invalid choice! Please try again." << endl;
		}
	}
	return 0;
}

