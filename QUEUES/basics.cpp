#include <bits/stdc++.h>
using namespace std;

class Queue
{
    public:

    int *arr;
    int front;
    int rear;
    int size;

    Queue(int size)
    {
        this->size = size;
        front = 0;
        rear = 0;
        arr = new int[size];
    }

    bool empty()
    {
        // queue will be emmpty when front == rear
        return (front == rear);
    }

    void enqueue(int x)
    {
        // check if queue is full
        if (rear == size)
        {
            cout << "Queue is full" << endl;
            return;
        }
        arr[rear] = x;
        rear++;
    }

    void dequeue()
    {
        //check if queue is empty
        if(front == rear){
            cout<<"Queue is empty"<<endl;
            return;
        }
        front++;

    }

    int frontelement(){
        if(front == rear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }

    void printqueue(){
        for(int i=front;i<rear;i++){
            cout<<arr[i]<<" ";
        }
         cout<<endl;
    }
};

int main()
{
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    // q.dequeue();
   
    q.printqueue();
    cout << q.frontelement() << endl;

    return 0;
}