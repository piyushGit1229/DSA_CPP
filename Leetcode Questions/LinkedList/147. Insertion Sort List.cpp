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
//     ListNode* insertionSortList(ListNode* head) {
//         ListNode* temp = head;
//         ListNode* finalnode = new ListNode(0);
//         vector<int> arr;
//         while (temp != nullptr) {
//             arr.push_back(temp->val);
//             temp = temp->next;
//         }
//         int n = arr.size();
//         sort(arr.begin(), arr.end());
//         ListNode* temp2 = finalnode;
//         for (int val : arr) {
//             temp2->next = new ListNode(val);
//             temp2 = temp2->next;
//         }
//         return finalnode->next;
//     }


// ListNode* dummy = new ListNode(0);  // ek dummy node banaya (sorted list ka starting point)
// while (head) {                      // jab tak original list khatam na ho
//     ListNode* next = head->next;    // next node store kar liya (taaki head badalne ke baad bhi access ho)
//     ListNode* temp = dummy;         // dummy se sorted list traverse karna start karenge

//     while (temp->next && temp->next->val < head->val) {
//         temp = temp->next;          // jab tak current value se choti values milti jaayein, aage badhte jao
//     }

//     head->next = temp->next;        // head ko us jagah insert karna hai
//     temp->next = head;              // head ko temp ke baad chipka diya

//     head = next;                    // ab head ko unsorted list ke agle node pe le jao
// }
// return dummy->next;                 // sorted list ka actual head





// };