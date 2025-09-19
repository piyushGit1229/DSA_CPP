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
//         ListNode* prev = nullptr;
//         ListNode* curr = head;
//         ListNode* next = nullptr;
//         while (curr) {
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }

//     ListNode* doubleIt(ListNode* head) {
//         head = reversell(head);

//         int carry = 0;
//         ListNode* dummynode = new ListNode(0);
//         ListNode* l_final = dummynode;
//         ListNode* temp = head;

//         while (temp != nullptr || carry != 0) {
//             int l_val=0;
//             if (temp != nullptr) {
//                 l_val = temp->val;
//                 temp = temp->next;
//             }

//             int product = l_val * 2 + carry;
//             carry = product / 10;
//             l_final->next = new ListNode(product % 10);
//             l_final = l_final->next;
//         }
//         return reversell(dummynode->next);
//     }
// };