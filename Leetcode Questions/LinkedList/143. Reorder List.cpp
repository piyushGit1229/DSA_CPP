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
//     ListNode* reverseLL(ListNode* head) {
//         ListNode* prev = nullptr;
//         ListNode* curr = head;
//         ListNode* next = nullptr;

//         while (curr != nullptr) {
//             ListNode* next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     } // converts 1 2 3 4 5 to 1 2 5 4 3 if mid is 3

//     void reorderList(ListNode* head) {
//         ListNode* fast = head;
//         ListNode* slow = head;
//         while (fast != nullptr && fast->next != nullptr) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         ListNode* rev = reverseLL(slow); // mid = 3 then reverse 3 4 5 to 5 4 3
//         ListNode* curr = head;
//         while (rev->next != nullptr) {
//             ListNode* tempcurr = curr->next;
//             curr->next = rev;

//             ListNode* temprev = rev->next;
//             rev->next = tempcurr;

//             curr = tempcurr;
//             rev = temprev;
//         }
//     }
// };