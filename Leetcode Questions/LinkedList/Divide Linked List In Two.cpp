// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the list node structure:
    
//     template <typename T>
//     class Node {
//         public:
//             T data;
//             Node* next;

//             Node(T data) {
//                 next = NULL;
//                 this->data = data;
//             }
//             ~Node() {
//                 if (next != NULL) {
//                     delete next;
//                 }
//             }
//     };

// ************************************************************/

// pair < Node < int > * , Node < int > * > divideList(Node < int > * head) {
//     // Write your code here.
//     if(head == nullptr) return {nullptr,nullptr};
//     Node < int > *oddhead = nullptr;
//     Node < int > *oddtail = nullptr;
//     Node < int > *evenhead = nullptr;
//     Node < int > *eventail = nullptr;

//    Node < int > *temp = head;
//    int pos = 1;
//    while(temp != nullptr){
//     Node<int>* newNode = new Node<int>(temp->data);
//     if(pos%2 == 1){
//         if(!oddhead){
//             oddhead=oddtail=newNode;
//         }
//         else{
//             oddtail->next = newNode;
//             oddtail = newNode; 
//         }
//     }
//     else{
//         if(!evenhead){
//             evenhead=eventail=newNode;
//         }
//         else{
//             eventail->next=newNode;
//             eventail = newNode;
//         }
//      }
//      temp=temp->next;
//      pos++;
//    }
//    return {oddhead,evenhead};


// }
