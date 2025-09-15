// // User function template for C++

// /*
// struct Node
// {
//     int data;
//     struct Node* next;

//     Node(int x){
//         data = x;
//         next = NULL;
//     }
// };
// */
// class Solution {
//   public:
//     Node* divide(Node* head) {
//         // code here
//      Node* evenhead = nullptr;
//      Node* eventail = nullptr;
     
//      Node* oddhead = nullptr;
//      Node* oddtail = nullptr;
     
//      Node* curr = head;
     
//      while(curr){
//         if(curr->data %2 ==0){
//             if(!evenhead){
//               evenhead=eventail=curr;
//             }
//             else{
//             eventail -> next = curr;
//             eventail = eventail->next;
//             }
            
//         } 
//         else{
//             if(!oddhead){
//                 oddhead = oddtail = curr;
//             }
//             else{
//             oddtail->next = curr;
//             oddtail = oddtail->next;
//         }
      
//      }
//        curr = curr->next;
//      }
//      if(eventail){
//          eventail->next = oddhead;
//      }
//      if(oddtail){
//          oddtail->next = nullptr;
//      }
     
//      if(evenhead){
//          return evenhead;
//      }
//      else{
//          return oddhead;
//      }
//    }
// };