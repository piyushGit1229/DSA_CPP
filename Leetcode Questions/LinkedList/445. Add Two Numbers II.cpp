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
//     ListNode* reversell(ListNode* head) {
//         ListNode* curr = head;
//         ListNode* next = nullptr;
//         ListNode* prev = nullptr;
//         while (curr != nullptr) {
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         l1 = reversell(l1);
//         l2 = reversell(l2);
//         ListNode* l3 = new ListNode(0);
//         ListNode* head = l3;
//         int carry = 0;

//         while (l1 != nullptr || l2 != nullptr || carry != 0) {
//             int l1_val = 0;
//             int l2_val = 0;

//             if (l1 != nullptr) {
//                 l1_val = l1->val;
//                 l1 = l1->next;
//             }

//             if (l2 != nullptr) {
//                 l2_val = l2->val;
//                 l2 = l2->next;
//             }

//             int sum = l1_val + l2_val + carry;
//             carry = sum / 10;                  // for carry 10 / 10 = 1
//             l3->next = new ListNode(sum % 10); // store last element of sum
//             l3 = l3->next;
            
//         }

//         return reversell(head->next);
//     }
// };