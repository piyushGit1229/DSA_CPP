// /*

// The structure of linked list is the following

// struct Node
// {
//     int data;
//     Node* next;

//     Node(int x){
//         data = x;
//         next = NULL;
//     }
// };
// */
// class Solution {
//   public:
//     Node *compute(Node *head) {
//         // your code goes here
//         Node* dummy = new Node(0);
//         dummy->next = head;
//         Node* prev = dummy;
//         Node* curr = head;
//         while(curr!=nullptr){
            
//             bool remove = false;
//             Node* runner = curr->next;
//             while(runner != nullptr){
//              if(runner->data>curr->data){
//                  remove = true;
//                  break;
//              }
//              runner = runner->next;
//             }
            
//             if(remove){
//                 prev->next = curr->next;
//                 curr=curr->next;
//             }
//            else{
//                prev = curr;
//                curr=curr->next;
//            }
//         }
//         return dummy->next;
//     }
// };