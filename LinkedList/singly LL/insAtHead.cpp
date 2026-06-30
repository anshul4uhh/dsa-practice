#include<iostream>
#include <algorithm>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){
    Node* head = new Node(10); // dummy head node
    int n;
    cout<<"enter the number of nodes: ";
    cin>>n;
    for(int i=0;i<n-1;i++){
        int data;
        cout<<"enter the data of node "<<i+1<<": ";
        cin>>data;
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    cout<<"The linked list is: ";
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}
