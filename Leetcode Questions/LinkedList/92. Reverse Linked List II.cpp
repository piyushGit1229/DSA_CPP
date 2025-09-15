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
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         if (head == nullptr || head->next == nullptr) {
//             return head;
//         }
//         vector<ListNode*>nodes;

//         ListNode* temp = head;
//         int pos = 1;
//         while (temp) {
//             if (pos >= left && pos <= right) {
//                 nodes.push_back(temp);
//             }
//             temp = temp->next;
//             pos++;
//         }

//         int l = 0;
//         int r = nodes.size() - 1;
//         while (l < r) {
//             swap(nodes[l]->val, nodes[r]->val);
//             l++;
//             r--;
//         }
//         return head;
//     }
// };