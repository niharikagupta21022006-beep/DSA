#include<iostream>
using namespace std;

class Node {
    public:
    int  data;
    Node*next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){
    Node*first = new Node(10);
    Node*second = new Node(20);
    Node*third = new Node(30);
    Node*fourth = new Node(40);

    first->next = second;
    second->next = third;
    third->next = fourth;
   
    Node*head = first;
    int position = 3;
    Node*newNode = new Node(25);

    Node*temp = head;

    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }


}