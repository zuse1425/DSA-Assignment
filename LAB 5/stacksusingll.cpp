#include<iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

//template<typename T>
class StackUsingLinkedList
{
	int stacksize;
	Node* head;
	//Node* top;
	public:
		StackUsingLinkedList()
		{
			head = NULL;
			//top = NULL;
			stacksize = 0;
		}
		
		void push(int g)
		{
			Node* temp = new Node(g);
			temp->next = head;
			head = temp;
			stacksize++;
		}
		
		int pop()
		{
			if(head == NULL)
			{
				return -1;
			}
			int ans = head->data;
			Node* temp = head;
			head = head->next;
			
			delete temp;
			stacksize--;
			return ans;
		}
		
		int top()
		{
			if(head == NULL)
			{
				return -1;
			}
			return head->data;
		}
		
		int StackSize()
		{
			return stacksize;
		}
		
		bool isEmpty()
		{
			if(stacksize == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};


int main()
{
    StackUsingLinkedList stack;
    int choice, item;
    while (true)
    {
        cout << "\n---------------------" << endl;
        cout << "Stack Implementation using Linked List" << endl;
        cout << "---------------------" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display Top" << endl;
        cout << "4. Stack Size" << endl;
        cout << "5. Is Empty" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element to push: ";
            cin >> item;
            stack.push(item);
            break;
        case 2:
            item = stack.pop();
            if (item == -1)
                cout << "Stack is empty!" << endl;
            else
                cout << "Popped element: " << item << endl;
            break;
        case 3:
            item = stack.top();
            if (item == -1)
                cout << "Stack is empty!" << endl;
            else
                cout << "Top element: " << item << endl;
            break;
        case 4:
            cout << "Stack Size: " << stack.StackSize() << endl;
            break;
        case 5:
            if (stack.isEmpty())
                cout << "Stack is empty" << endl;
            else
                cout << "Stack is not empty" << endl;
            break;
        case 6:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice! Please enter again." << endl;
        }
    }
    return 0;
}
