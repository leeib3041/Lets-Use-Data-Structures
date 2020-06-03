#ifndef LINKED_LIST.H
#define LINKED_LIST.H

#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;
    Node *prev;
};

class List
{
    private:
        Node* head;
    
    public:
        List();
        ~List();
        void prepend(int);
        void append(int);
        friend ostream& operator<<(ostream&, const List&);
        void printReverse() const;
        void printReverse(Node*) const;
};

#endif