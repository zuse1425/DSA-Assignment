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

void insert_pos(Node*& head, int pos, int element) {
    Node* ele = new Node(element);

    if (pos == 0) {
        ele->next = head;
        head = ele;
        print(head);
        return;
    }

    Node* temp = head;
    int i = 1;
    while (temp != NULL && i < pos) {
        temp = temp->next;
        i++;
    }

    if (temp != NULL) {
        ele->next = temp->next;
        temp->next = ele;
        print(head);
    }
    else {
        cout << "Invalid position" << endl;
    }
}

void delete_pos(Node*& head, int pos) {
    if (head == NULL) {
        cout << "Empty" << endl;
        return;
    }

    if (pos == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        print(head);
        return;
    }

    Node* temp = head;
    int i = 1;
    while (temp != NULL && i < pos) {
        temp = temp->next;
        i++;
    }

    if (temp != NULL && temp->next != NULL) {
        Node* temp1 = temp->next;
        temp->next = temp1->next;
        delete temp1;
        print(head);
    }
    else {
        cout << "Invalid position" << endl;
    }
}

int main() {
    Node* head = NULL;

    // Insertion at first node
    cout << "Inserting 10 at first node:" << endl;
    insert_pos(head, 0, 10);

    // Insertion at last node
    cout << "Inserting 20 at last node:" << endl;
    insert_pos(head, 1, 20);

    // Traversing after each insertion
    print(head);

    // Insertion at middle node
    cout << "Inserting 15 at position 1:" << endl;
    insert_pos(head, 1, 15);

    // Traversing after insertion at middle node
    print(head);

    // Deletion at middle node
    cout << "Deleting node at position 1:" << endl;
    delete_pos(head, 1);

    // Traversing after deletion at middle node
    print(head);

    return 0;
}

