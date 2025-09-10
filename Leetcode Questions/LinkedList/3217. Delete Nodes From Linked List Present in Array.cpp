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
//     ListNode* modifiedList(vector<int>& nums, ListNode* head) {
//         unordered_map<int, int> mp;
//         for (int i = 0; i < nums.size(); i++) {
//             mp[nums[i]]++;
//         }

//         ListNode* temp = new ListNode(0);
//         temp->next = head;
//         ListNode* curr = temp;

//         while (curr->next != nullptr) {

//             if (mp.find(curr->next->val) != mp.end()) {
//                 curr->next = curr->next->next;
//             } else {
//                 curr = curr->next;
//             }
//         }
//         return temp->next;
//     }
// };