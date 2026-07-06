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

void print(Node*head){
    Node*temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void insertHead(Node *&head, int d)
{
    Node*newNode = new Node(d);
    newNode->next = head;
    head = newNode;
}

void insertTail(Node*&tail,int d){
    Node* newNode = new Node(d);
    tail->next = newNode;
    tail = newNode;


}




void InsertPosition(Node*&head,Node*&tail,int position,int d){
    if(position == 1){
         insertHead(head,d);
         return;
    }

    Node*temp = head;
    int cnt = 1;
    while(cnt <position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertTail(tail,d);
        return;
    }

    Node*newToNode = new Node(d);
    newToNode->next = temp->next;
    temp->next = newToNode;
       
}

int main() {
    Node*node1 = new Node(10);

    Node*tail = node1;
    Node*head = node1;
    insertTail(tail,20);
    insertTail(tail,40);
    insertTail(tail,50);

    InsertPosition(head,tail,3,30);


    print(head);
}