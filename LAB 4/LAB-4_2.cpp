#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

Node* takeInput() {
    int data;
    cin >> data;
    Node* head = NULL;
    Node* tail = NULL;
    int count = 0;
    while (data != -1) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
        count++;
    }
    cout << "Number of elements = " << count << endl;
    return head;
}

void print(Node* head) {
    if (head == NULL) {
        cout << "Empty" << endl;
        return;
    }

    cout << "Linked List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void delete_first(Node*& head) {
    if (head == NULL) {
        cout << "Empty list, nothing to delete." << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    print(head);
}

void delete_last(Node*& head) {
    if (head == NULL) {
        cout << "Empty list, nothing to delete." << endl;
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        cout << "List is empty now." << endl;
        return;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    print(head);
}

void delete_middle(Node*& head, int pos) {
    if (head == NULL) {
        cout << "Empty list, nothing to delete." << endl;
        return;
    }
    if (pos == 0) {
        delete_first(head);
        return;
    }
    Node* temp = head;
    int count = 1;
    while (count < pos && temp->next != NULL) {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL) {
        cout << "Position exceeds the size of the list." << endl;
        return;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
    print(head);
}

int main() {
    Node* head = takeInput();
    print(head);

    // Delete first node
    cout << "Deleting first node:" << endl;
    delete_first(head);

    // Delete last node
    cout << "Deleting last node:" << endl;
    delete_last(head);

    // Delete node at position 2 (middle)
    cout << "Deleting node at position 2 (middle):" << endl;
    delete_middle(head, 2);

    return 0;
}

