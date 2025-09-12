
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if (!list1) return list2;
//         if (!list2) return list1;

//         if(list1->val<=list2->val){
//             list1->next =mergeTwoLists(list1->next,list2);
//             return list1;
//         }

//         else{
//             list2->next = mergeTwoLists(list1,list2->next);
//             return  list2;
//         }

//     }
// };


 // Write your code here.
    //we are given list 1 and list 2 
    //we will start with iterative approch

    // Node<int>* dummy = new Node(0);
    // Node<int>* tail = dummy;

    // while(first && second){
    //     if(first->data <= second->data){
    //         tail->next = first;
    //         first=first->next;
    //     }
    //     else{
    //         tail->next = second;
    //         second = second->next;
    //     }
    //     tail = tail->next;
    // }
    // if(first) tail ->next= first;
    // if(second) tail ->next = second;

    // return dummy->next;
    