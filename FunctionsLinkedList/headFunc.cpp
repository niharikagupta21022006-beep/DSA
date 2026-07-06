#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

void insertHead(Node *&head, int d)
{
    Node*newNode = new Node(d);
    newNode->next = head;
    head = newNode;
}

void print(Node*head){
    Node*temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{

    Node *head = NULL;
    insertHead(head, 10);
    insertHead(head, 20);
    insertHead(head, 30);
    print(head);
}