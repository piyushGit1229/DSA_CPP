
// class Solution {
//   public:
//     Node* linkdelete(Node* head, int n, int m) {
//         // code here
//        if(!head) return nullptr;
       
//        Node* temp = head;
       
//        while(temp!=nullptr){
//            for(int i=1;i<m && temp!=nullptr ;i++){
//                temp = temp -> next;
//            }
//            if(temp == nullptr) break;
           
//            Node* fast = temp->next;
//            for(int i=0;i<n && fast != nullptr;i++){
//                fast = fast ->next;
//            }
//            temp->next = fast;
//            temp = fast;
//        }
//        return head;
       
//     }
// };