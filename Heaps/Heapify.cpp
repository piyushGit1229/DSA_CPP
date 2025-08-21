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
int main(){
vector<int>maxheap;
insertmaxheap(maxheap, 10);
insertmaxheap(maxheap, 20);
insertmaxheap(maxheap, 5);
insertmaxheap(maxheap, 30);

cout<<"Heap elements: "<<endl;
for(int x:maxheap){
    cout<<x<<endl;
}

return 0;
}