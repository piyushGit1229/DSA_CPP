// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//         // copy the next nodes value
//         // node->val = node->next->val; // 4 5 5 9

//         // // now make nodetodelte
//         // ListNode* nodetodelte = node->next;
//         // node->next = node->next->next;

//         // delete nodetodelte;

//         node->val = node->next->val;
//         node->next = node->next->next;
//     }
// };