// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* reverse(ListNode* head) {
//         ListNode* prev = nullptr;
//         ListNode* curr = head;
//         ListNode* next = nullptr;
//         while (curr != nullptr) {
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
//     ListNode* removeNodes(ListNode* head) {
//         // ListNode* dummy = new ListNode(0);
//         // dummy->next = head;
//         // ListNode* prev = dummy;
//         // ListNode* curr = head;

//         // while (curr != nullptr) {
//         //     bool remove = false;
//         //     ListNode* runner = curr->next;
//         //     while (runner != nullptr) {
//         //         if (curr->val < runner->val) {
//         //             remove = true;
//         //             break;
//         //         }
//         //         runner = runner->next;
//         //     }
//         //     if (remove) {
//         //         prev->next = curr->next;
//         //         curr = curr->next;
//         //     } else {
//         //         prev = curr;
//         //         curr = curr->next;
//         //     }
//         // }
//         // return dummy->next;
//         head = reverse(head);
//         ListNode* dummy = new ListNode(0);
//         dummy->next = head;
//         ListNode* prev = dummy;
//         ListNode* curr = head;

//         int maxval = head->val;
//         while (curr) {
//             if (curr->val < maxval) {
//                 // delete
//                 prev->next = curr->next;
//             } else {
//                 maxval = curr->val;
//                 prev = curr;
//             }
//             curr = curr->next;
//         }
//         return reverse(dummy->next);
//     }
// };