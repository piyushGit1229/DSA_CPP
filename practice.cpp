// #include<bits/stdc++.h>

// using namespace std;

// class Node{
//     public:
//     int val;
//     Node* next;

//     Node(int data){
//         this->val = data;
//         this->next = NULL;
//     }
// };

// Node* createlinkedlist(vector<int>&arr){
//      Node* head = new Node(arr[0]);
//      Node* temp = head;
//      for(int i=1;i<arr.size();i++){
//         temp->next = new Node(arr[i]);
//         temp = temp->next;
//      }
//      return head;
// }

// //insertion at beginning

// void insertatbeg(Node* &head,int val){
//     Node * newNode = new Node(val);
//     newNode->next = head;
//     head = newNode;
// }

// //insertion at end
// Node* insertatend(Node* &head,int val){
//     Node * newNode = new Node(val);
//     Node* temp = head;
//     while(temp->next!=NULL){
//         temp = temp->next;
//     }
//     temp->next = newNode;
//     return head;
// }

// // Insertion at Position
// void insertatpos(Node* &head,int val,int pos){
//     if(pos == 1){
//         insertatbeg(head,val);
//         return;
//     }
//     Node* temp = head;
//     for(int i=0;i<pos-1;i++){
//         temp= temp -> next;
//     }
//     Node * newNode = new Node(val);
//     newNode->next = temp->next;
//     temp->next = newNode;
// }


// //DELETION

// void deleteatbeg(Node* &head){
//     if(head == nullptr){
//         return;
//     }
//     Node* temp = head;
//     head = head->next;
//     delete temp;
// }

// void deleteatend(Node* &head){
//     if(head == nullptr){
//         return;
//     }
//     if(head->next == nullptr){
//         delete head;
//         head = nullptr;
//         return;
//     }
//     Node* temp = head;
//     while(temp->next->next != nullptr){
//         temp = temp->next;
//     }
//     temp->next = nullptr;
//     delete temp->next;
// }

// void deleteatpos(Node* &head,int pos){
//     if(pos == 1){
//         deleteatbeg(head);
//         return;
//     }
//     Node* temp = head;
//     for(int i=0;i<pos-2;i++){
//         temp = temp -> next;
//     }
//     Node* nodetodel = temp -> next;
//     temp -> next = temp -> next -> next;
//     delete nodetodel;
// }

// void deleteatbegusingdummy(Node* &head){
//     Node* dummy = new Node(0);
//     dummy -> next = head;
//     dummy->next = dummy->next->next;
// }
// void printlist(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp = temp->next;
//     }
//      cout<<endl;
// }


// Node* search(Node* head,int key){
//     Node *temp = head;
//     while(temp != nullptr){
//         if(temp->val == key){
//             return temp;
//         }
//         temp = temp->next;
//     }
// }

// // Count nodes
// int countnodes(Node* head){
//     Node* temp = head;
//     int count = 0;
//     while(temp != nullptr){
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// int sumnodes(Node* head){
//     int sum = 0;
//     Node* temp = head;
//     while(temp != nullptr){
//         sum += temp->val;
//         temp = temp->next;
//     }
//     return sum;
// }

// int findmax(Node* head){
//     int maxi = INT_MIN;
//     Node* temp = head;
//     while(temp != nullptr){
//         if(temp->val > maxi){
//             maxi = temp->val;
//         }
//         temp = temp -> next;
//     }
//     return maxi;
// }


// //Middle of linked list 
// Node* findmid(Node* head){
//     Node* fast = head;
//     Node* slow = head;
//     while(fast != nullptr && fast->next != nullptr){
//         fast = fast->next->next;
//         slow = slow->next;
//     }
//     return slow;
// }
// int main(){
//     //create a linked list
//     // Node* head = new Node(10);
//     // head->next = new Node(20);
//     // head->next->next = new Node(30);

//     vector<int>arr = {10,20,30,40,50};
//     Node* head = createlinkedlist(arr);
//     printlist(head);
//     insertatbeg(head,5);
//     printlist(head);
//     insertatend(head,60);
//     printlist(head);
//     insertatpos(head,35,3);
//     printlist(head);
//     deleteatbeg(head);
//     printlist(head);
//     deleteatend(head);
//     printlist(head);
//     deleteatpos(head,3);
//     printlist(head);
//     Node* node = search(head,40);
//     cout<<node->val<<endl;
//     cout<<countnodes(head)<<endl;
//     cout<<sumnodes(head)<<endl;
//     cout<<findmax(head)<<endl;
//     Node* mid = findmid(head);
//     cout<<mid->val<<endl;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     string s = "piyush";
//     reverse(s.begin(),s.end());
//     cout<<s;
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;
// int main(){
//     vector<vector<int>>arr;
//     arr.push_back({1,5});
//     arr.push_back({1,4});
//     arr.push_back({1,3});
//     arr.push_back({1,2});
//     arr.push_back({1,1});
//     //sort by end time using customn sort
//     sort(arr.begin(),arr.end(),[](vector<int>a,vector<int>b){
//         return a[1]<b[1];
//     });
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr[i].size();j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void movezerostoend(vector<int>&arr,int n){
//     int i=0;
//     int j=0;
//     while(j<n){
//         if(arr[j] != 0){
//             swap(arr[i],arr[j]);
//             i++;
//         }
//         j++;
//     }
// }
// int main(){
//     int size;
//     cout<<"Enter size of array :";
//     cin>>size;
//     vector<int>arr(size);
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//         arr.push_back(arr[i]);
//     }
//     movezerostoend(arr,size);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n = 13;
//     string binary = bitset<8>(n).to_string();
//     cout<<binary;
//     string res = "";
//     for(int i=0;i<binary.size();i++){
//         if(binary[i] == '1'){
//             res += '0';
//         }
//         else
//         {
//             res += '1';
//         }
//     }
//     int result = stoi(res,nullptr,2);
//     cout<<result;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;



// int count(vector<int>&arr,int n){
//     int count = 1;
//     int maxi = arr[0];
//     for(int i = 1;i<n;i++){
//         if(arr[i] > maxi){
//             count++;
//             maxi = arr[i];
//         }
//     }
//     return count;
// }
// int main(){
// int size;
// cin>>size;
// vector<int>arr(size);
// for(int i=0;i<size;i++){
//     cin>>arr[i];
//     arr.push_back(arr[i]);
// }
// int ans =  count(arr,size);
// cout<<ans;
// return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter number :";
// cin>>n;
// int prod = 1;
// int rem;
// while(n > 0){
//     rem = n % 10;
//     prod = prod * rem;
//     n = n/10;
// }
// cout<<prod;
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    //type 1
    // int n;
    // cin>>n;
    // vector<int>arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    //type 2
    // string s;
    // getline(cin,s);

    // stringstream ss(s);
    // vector<int>arr;
    // int num;
    // while(ss >> num){
    //     arr.push_back(num);
    // }
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }

    // type 3 Multiple Test Cases
    // int testc;
    // cout<<"enter test cases:";
    // cin>>testc;
    // while(testc--){
    //     vector<int>arr;
    //     int n;
    //     cin>>n;
    //     for(int i =0;i<n;i++){
    //         cin>>arr[i];
    //     }
    // }
//     string s;
//     cin>>s;
//     char target;
//     cin>>target;
    
//     int n = s.size();
//     int start = 0;
//     int end = n-1;
//     int ans = -1;
//     while(start <= end){
//         int mid = start +(end-start)/2;
//         if(s[mid] == target){
//             ans = mid;
//             break;
//         }
//         else if(s[mid] > target){
//             end = mid - 1;
//         }
//         else{
//             start = mid+1;
//         }
//     }
//     cout << ans;
//     return 0;
// }


#include<iostream>
using namespace std;

int a = 10; //global variable

class abc{
    public:
    int a = 20; //local variable
    //but what if you need to access global variable inside class?
    void display(){
        cout<<a; //shows local variable
    }
    //access global inside loca using scope resolution operator
    void display1(){
        cout<<::a;
    }
};

int main(){
    abc obj;
    obj.display();
    obj.display1();
    return 0;
}