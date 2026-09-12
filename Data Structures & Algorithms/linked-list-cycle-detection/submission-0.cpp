/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
  map<ListNode*, int> m;
    bool hasCycle(ListNode* head) {
        for(ListNode* cur=head; cur; cur=cur->next){
           m[cur]++;
            if(m[cur]>1){
                return true;
            }
        }
        return false;
    }
};
