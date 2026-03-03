#include <iostream>

using namespace std;


struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() : head(nullptr) {}

    void insertAtFront(int val) {
        Node* newNode = new Node(val);
        if (head != nullptr) {
            head->prev = newNode;
            newNode->next = head;
        }
        head = newNode;
    }


    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    
    void insertAfter(Node* prevNode, int val) {
        if (prevNode == nullptr) {
            cout << "Previous node cannot be NULL" << endl;
            return;
        }
        Node* newNode = new Node(val);
        newNode->next = prevNode->next;
        prevNode->next = newNode;
        newNode->prev = prevNode;
        if (newNode->next != nullptr) {
            newNode->next->prev = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};



int main() {
    DoublyLinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtFront(5);

    
    if (list.head != nullptr && list.head->next != nullptr) {
        list.insertAfter(list.head->next, 15);
    }

    list.display();

    return 0;
}
