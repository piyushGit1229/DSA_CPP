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
//     vector<int> nodesBetweenCriticalPoints(ListNode* head) {
//         if (!head || !head->next || !head->next->next) {
//             return {-1, -1}; // Less than 3 nodes → no critical points
//         }

//         ListNode* prev = head;
//         ListNode* curr = head->next;
//         int index = 1;
//         vector<int> positions;
//         while (curr->next != nullptr) {
//             index++;
//             if ((curr->val > prev->val && curr->val > curr->next->val) ||
//                 (curr->val < prev->val && curr->val < curr->next->val)) {
//                 positions.push_back(index);
//             }
//             prev = curr;
//             curr = curr->next;
//         }

//         if (positions.size() < 2) {
//             return {-1, -1}; // fewer than 2 critical points
//         }

//         int mindist = INT_MAX;
//         for (int i = 1; i < positions.size(); i++) {
//             mindist = min(mindist, positions[i] - positions[i - 1]);
//         }
//         int maxdist = positions.back() - positions.front();
//         return {mindist, maxdist};
//     }
// };