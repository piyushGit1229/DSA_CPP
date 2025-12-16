#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class Queue{
    public:
    Node* front;
    Node* rear;
    Queue(){
        front = NULL;
        rear = NULL;
    }

    bool isfull(){
        if(front == NULL && rear == NULL){
            return true;
        }
        return false;
    }
    
    bool isempty(){
       return (front == nullptr);
    }

    void enqueue(int val){
        Node* temp = new Node(val);

        //check if queue is empty
        if(isempty()){
            front = temp;
            rear = temp;
            return;
        }
        else{
            rear->next = temp;
            rear = temp;
            return;
        }
    }

    void dequeue(){
        if(isempty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node* temp = front;
        front = front -> next;
        delete temp;
    }

    int getfront(){
        if(isempty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return front->data;
    }

    void display(){
        Node* temp = front;
        while(temp != nullptr){
            cout<<temp->data<<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }
};
int main(){

Queue q;
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.display();
cout<<q.getfront()<<endl;
q.dequeue();
q.display();

return 0;
}