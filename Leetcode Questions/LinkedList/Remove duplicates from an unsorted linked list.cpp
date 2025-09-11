
// class Solution {
//   public:
//     Node *removeDuplicates(Node *head) {
//         // your code goes here
//         if(!head) return head;
          
//         unordered_set<int>seen;
//         Node* temp = head;
//         Node* prev = nullptr;
//         while(temp!=nullptr){
//             if(seen.count(temp->data)){
//                 prev->next = temp->next;
//                 delete temp;
//                 temp=prev->next;
//             }
//             else{
//                 seen.insert(temp->data);
//                 prev = temp;
//                 temp= temp->next;
//             }
//         }
//         return head;
//     }
// };