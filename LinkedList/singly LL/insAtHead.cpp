#include<iostream>
#include <algorithm>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data = 0;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){
    Node* head = new Node(); // dummy head node
    int n;
    cout<<"enter the number of nodes: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cout<<"enter the data of node "<<i+1<<": ";
        
    }
    cout<<"The linked list is: ";
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}
