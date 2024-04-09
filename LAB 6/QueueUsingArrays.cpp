#include<iostream>
using namespace std;
template <typename T>
class QueueUsingArrays
{
	T *data;
	int size;
	int front;
	int tail;
	int capacity;
	
	public:
		QueueUsingArrays(int s)
		{
			data = new T[s];
			front = -1;
			tail = 0;
			size = 0;
			capacity = s;
		}
		
		int getSize()
		{
			return size;
		}
		
		bool isEmpty()
		{
			return size == 0;
		}
		
		void enqueue(T d)
		{
			if(size == capacity)
			{
			/*cout<<"Queue  is full!"<<endl;
			return;*/

//				Dyanamic Queue
				T *newData = new T[2*capacity];
				int j = 0;
				for(int i = front; i<capacity ; i++)
				{
					newData[j] = data[i];
					j++;
				}
				for(int i = 0; i<capacity; i++)
				{
					newData[j] = data[i];
					j++;
				}
				
				delete [] data;
				data = newData;
				front = 0;
				tail = capacity;
				capacity = 2*capacity;
			}
			if(front == -1)
			{
				front = 0;
			}
			data[tail] = d;
			tail = (tail + 1) % capacity;
			size++;
		}
		
		T Front()
		{
			if(isEmpty())
			{
				cout<<"Queue is empty!"<<endl;
				return 0;
			}
			return data[front];
		}
		
		T dequeue()
		{
			if(isEmpty())
			{
				cout<<"Queue is empty!"<<endl;
				return 0;
			}
			
			T val = data[front];
			data[front] = -1;
			front = (front + 1) % capacity;
			size--;
			if(size == 0)
			{
				front = -1;
				tail = 0;
			}
			return val;
		}
};
