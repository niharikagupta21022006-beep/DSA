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

int main(){

    Node*first = new Node(10);
    Node*second = new Node(20);
    Node*third = new Node(30);

    first->next = second;
    second->next = third;

    Node*head = first;
    Node*newNode = new Node(40);

    Node*temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;

    temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }


}