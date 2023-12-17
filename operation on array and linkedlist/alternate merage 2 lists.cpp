
#include <iostream>
using namespace std;

// A Linked List Node
struct Node
{
    int data;
    Node* next;
};

// Helper function to print a given linked list
void printList(Node* head)
{
    Node* ptr = head;
    while (ptr)
    {
        cout << ptr->data << " —> ";
        ptr = ptr->next;
    }

    cout << "null\n";
}

// Helper function to insert a new node in the beginning of the linked list
void push(Node** headRef, int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = *headRef;

    *headRef = newNode;
}

// Recursive function to construct a linked list by merging alternate
// nodes of two given linked lists
void merge(Node *a, Node* &b)
{
    // base case
    if (a == nullptr || b == nullptr) {
        return;
    }

    // take backup of next of `a`
    Node *a_next = a->next;

    // rearrange pointers
    a->next = b;
    b = b->next;
    a->next->next = a_next;

    merge(a_next, b);
}

// main method
int main()
{
    Node *a = nullptr, *b = nullptr;

    // construct the first list
    for (int i = 3; i >= 0; i--) {
        push(&a, i);
    }

    // construct the second list
    for (int i = 10; i >= 4; i--) {
        push(&b, i);
    }

    // print both lists
    cout << "First List - "; printList(a);
    cout << "Second List - "; printList(b);

    merge(a, b);

    cout << "\nAfter Merge:\n\n";

    cout << "First List - "; printList(a);
    cout << "Second List - "; printList(b);

    return 0;
}
