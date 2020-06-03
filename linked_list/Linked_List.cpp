#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};

Node *new_Node(int data)
{
    Node *node = new Node();
    node->data = data;
    node->next = NULL;
    return node;
}

void insert(Node **head, int data)
{
    if (*head == NULL) *head = new_Node(data);
    else if (data < (*head)->data) {
        Node* temp = new_Node(data);
        temp->next = *head;
        *head = temp;
    }
    else {
        Node *current = *head;
        Node *temp = new_Node(data);
        while (current->next != NULL && data > current->next->data) {
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp;
    }
}

void print_List(Node *head)
{
    Node *current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    } cout << endl << endl;
}

int main(int argc, char *argv[])
{
    Node *head = NULL;
    
    srand((unsigned) time(0));
    cout << endl << "Random Numbers before linked list: ";
    for (int i = 0; i < 20; i++) {
        int data = rand() % 100;
        cout << data << " ";
        insert(&head, data);
    } cout << endl;
    cout << "Random Numbers sorted linked list: ";
    print_List(head);

    return 0;
}