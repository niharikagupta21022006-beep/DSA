#include<iostream>
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

void deleteFunc(Node*&head,int position){
    if(position == 1){
        Node*temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;

    }

    else{
        Node*curr = head;
        Node*prev = NULL;
        int cnt = 1;
        while(cnt <position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;


    }
}

int main(){

    Node*first = new Node(10);
    Node*second= new Node(20);
    Node*third = new Node(30);
    Node*fourth = new Node(40);

    first->next = second;
    second->next = third;
    third->next = fourth;

    Node*head = first;
    deleteFunc(head,3);
    print(head);
}
