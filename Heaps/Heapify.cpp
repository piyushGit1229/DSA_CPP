#include<bits/stdc++.h>
using namespace std;
void insertminheap(vector<int>&heap , int value){
    heap.push_back(value);
    int i=heap.size()-1;
    while(i>0){
        int parent=(i-1)/2;
        if(heap[parent]>heap[i]){
            swap(heap[parent],heap[i]);
            i=parent;
        }
        else{
            break;
        }
    }
    
}
void insertmaxheap(vector<int>&heap,int value){
heap.push_back(value);
int i=heap.size()-1;
while(i>0){
    int parent = (i-1)/2;  
    if(heap[parent]<heap[i]){
        swap(heap[parent],heap[i]);
        i=parent;
    }  
    else{
        break;
    }
}
}
//time complexity: O(logn)


void deletefromheap(vector<int>&heap){
    heap[0]=heap[heap.size()-1];
    heap.pop_back();
    heapify(heap,heap.size(),0);
}

void heapify(vector<int>&heap,int n,int i){
    int largest = i; //take largest as root
    int left = 2*i+1; // left child
    int right = 2*i+2; // right child
    if(left < n && heap[largest] < heap[left]){ // if left child is greater than root
        largest = left;
    }
    if(right < n && heap[largest] < heap[right]){ // if right child is greater than root
        largest = right;
    }
    if(largest != i){
        swap(heap[i],heap[largest]);
        heapify(heap,n,largest);
    }
}
//time complexity: O(n)

void buildheap(vector<int>&heap){
    int n=heap.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(heap,n,i);
    }
}
//time complexity: O(n)
int main(){
vector<int>maxheap;
insertmaxheap(maxheap, 10);
insertmaxheap(maxheap, 20);
insertmaxheap(maxheap, 5);
insertmaxheap(maxheap, 30);

for(int i=0;i<maxheap.size();i++){
    heapify(maxheap,maxheap.size(),i);
}

cout<<"Heap elements: "<<endl;
for(int x:maxheap){
    cout<<x<<endl;
}

return 0;
}