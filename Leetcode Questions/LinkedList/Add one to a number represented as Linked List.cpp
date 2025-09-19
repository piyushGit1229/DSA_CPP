// /**
//  * Definition of linked list:
//  *
//  * class Node {
//  * public:
//  *      int data;
//  *      Node *next;
//  *      Node() {
//  *          this->data = 0;
//  *          this->next = NULL;
//  *      }
//  *      Node(int data) {
//  *          this->data = data;
//  *          this->next = NULL;
//  *      }
//  *      Node (int data, Node *next) {
//  *          this->data = data;
//  *          this->next = next;
//  *      }
//  * };
//  *
//  *************************************************************************/
// Node* reversell(Node* head){
//     Node* prev = nullptr;
//     Node* curr = head;
//     Node* next = nullptr;

//     while(curr){
//         next = curr->next;
//         curr->next = prev ;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }
// Node *addOne(Node *head)
// {
//     // Write Your Code Here.
//     head = reversell(head);
//     Node* temp = head;
//     Node* dummy = new Node(0);
//     Node* l_final = dummy;
//     int carry=1;

//     while(temp != nullptr || carry != 0){
//         int l_val = 0;
//         if(temp != nullptr){
//             l_val = temp->data;
//             temp = temp->next;
//         }
//         int sum = l_val+carry;
//         carry=sum/10;
//         l_final -> next = new Node(sum%10);
//         l_final=l_final->next;
//     }
//     return reversell(dummy->next);
    
// }
