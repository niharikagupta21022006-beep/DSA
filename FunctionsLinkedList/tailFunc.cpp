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

void insertTail(Node*&tail,int d){
    Node* newNode = new Node(d);
    tail->next = newNode;
    tail = newNode;


}

void print(Node*head){
    Node*temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout  << endl;
}

int main() {
    Node*node1 = new Node(10);

    Node*tail = node1;
    Node*head = node1;
    insertTail(tail,20);
    insertTail(tail,30);
    insertTail(tail,40);
    insertTail(tail,50);


    print(head);
}