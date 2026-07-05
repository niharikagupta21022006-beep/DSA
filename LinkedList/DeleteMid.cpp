#include <iostream>
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

int main()
{

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    first->next = second;
    second->next = third;

    Node*head = first;
    Node*curr = head;
    Node*prv = NULL;

    prv = curr;
    curr = curr->next;

    prv->next = curr->next;
    delete curr;

    Node*temp = head;
    while(temp != NULL){
        cout <<temp->data << " ";
        temp = temp->next;
    }
}
