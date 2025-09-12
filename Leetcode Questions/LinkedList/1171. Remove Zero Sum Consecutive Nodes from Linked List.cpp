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
//     ListNode* removeZeroSumSublists(ListNode* head) {
//         int prefixsum = 0;
//         unordered_map<int, ListNode*> mp;
//         ListNode* dummy = new ListNode(0);
//         dummy->next = head;
//         mp[0] = dummy;

//         while (head != nullptr) {
//             prefixsum += head->val;

//             if (mp.find(prefixsum) != mp.end()) {
//                 ListNode* p = mp[prefixsum];
//                 ListNode* start = p;
//                 int psum = prefixsum;

//                 while (start != head) {
//                     start = start->next;
//                     psum += start->val;
//                     if (start != head) {
//                         mp.erase(psum);
//                     }
//                 }
//                 p->next = head->next;
//             } else {
//                 mp[prefixsum] = head;
//             }
//             head = head->next;
//         }
//         return dummy->next;
//     }
// };