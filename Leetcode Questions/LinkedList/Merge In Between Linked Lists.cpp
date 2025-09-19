/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
//  */
// class Solution {
// public:
//     ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
//         ListNode* left = list1;
//         ListNode* right = list1;
//         for (int i = 1; i < a; i++) {
//             left = left->next;
//         }
//         for (int i = 0; i <= b; i++) {
//             right = right->next;
//         }

//         left->next = list2;
//         ListNode* temp = list2;
//         while (temp->next != nullptr) {
//             temp = temp->next;
//         }
//         temp->next = right;

//         return list1;
//     }
// };