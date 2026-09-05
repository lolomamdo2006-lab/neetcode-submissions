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
     ListNode* hh(ListNode* &head,ListNode* &nxt){
        if(!nxt){
            return head ;
        } 
        ListNode* temp=nxt;
        ListNode* tempnext=nxt->next;
       
        nxt->next=head;
         return hh(temp,tempnext );

    }
    ListNode* reverseList(ListNode* head) {
        if(head){
         ListNode* temp=head->next;
        head->next=0; 
         return  hh(head,temp);
        }
        return head;
       
        
    }
};
