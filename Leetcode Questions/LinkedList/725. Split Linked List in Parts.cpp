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
//     vector<ListNode*> splitListToParts(ListNode* head, int k) {
//         ListNode* curr = head;
//         int l = 0;
//         while (curr) {
//             l++;
//             curr = curr->next;
//         }
//         int bucketnodes = l / k;
//         int extranodes = l % k;
//         vector<ListNode*> result(k, nullptr);
//         curr = head;
//         ListNode* prev = nullptr;

//         for (int i = 0; i < k; i++) {
//             result[i] = curr;
//             for (int count = 1; count <= bucketnodes + (extranodes > 0 ? 1 : 0);
//                  count++) {
//                 prev = curr;
//                 curr = curr->next;
//             }
//             if (prev != nullptr)
//                 prev->next = nullptr;
//             extranodes--;
//         }
//         return result;
//     }
// };