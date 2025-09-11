// /*
// struct Node {
//   int data;
//   struct Node *next;
//   Node(int x) {
//     data = x;
//     next = NULL;
//   }
// };*/

// class Solution {
//   public:
//     // Function to remove duplicates from sorted linked list.
//     Node* removeDuplicates(Node* head) {

//         // code here
//     Node* temp=head;
    
//     while(temp!=nullptr && temp->next !=nullptr){
//         if(temp->data == temp->next->data){
//            Node* nodetodel = temp->next;
//            temp->next = nodetodel->next;
//            delete nodetodel;
//         }
//         else{
//             temp=temp->next;
//         }
//     }
//     return head;
    
//     }
// };