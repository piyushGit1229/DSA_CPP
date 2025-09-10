/**
 * Definition of linked list:
//  *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

// int lengthOfLoop(Node *head) {
//     // Write your code here
//     Node* fast = head;
//     Node* slow = head;
//     if(head->next == nullptr){
//         return 0;
//     }

//     while(fast != NULL && fast->next != NULL){
//         slow = slow -> next;
//         fast = fast -> next -> next;
//         if(fast == slow){
//             int length=1;
//             Node *temp = slow->next;
//             while(temp!=slow){
//                  length++;
//                 temp=temp->next;
//             }
//             return length;
//         }
//     }
//       return 0;
//     }
  
    
