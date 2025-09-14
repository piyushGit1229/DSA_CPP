#include <cstddef>

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node* sortList(Node *head){
    // Write your code here.
    int countzero = 0;
    int countone = 0;
    int counttwo =0;
    Node* temp = head;
    while(temp!=nullptr){
        if(temp->data == 0){
            countzero++;
        }
        else if(temp->data == 1){
            countone++;
        }
        else if(temp->data == 2){
            counttwo++;
        }
        temp=temp->next;
    }
    temp = head;
    while(temp!=nullptr){
        if(countzero>0){
            temp->data = 0;
            countzero--;
        }

         else if(countone>0){
            temp->data = 1;
            countone--;
        }

        else if(counttwo>0){
            temp->data = 2;
            counttwo--;
        }
        temp=temp->next;
    }
    return head;
}