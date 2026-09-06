
class Solution {
   public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p = list1;
        ListNode* q = list2;
        ListNode* head = nullptr;
        ListNode* current = nullptr;

        if (!p) return q;
        if (!q) return p;

      
        if (p->val <= q->val) {
            head = p;
            current = head;
            p = p->next;
        } 
        else {
            head = q;
            current = head;
            q = q->next;
        }

     
        while (p && q) {
            if (q->val >= p->val) {
                current->next = p;
                p = p->next;
            } 
            else {
                current->next = q;
                q = q->next;
            }

            current = current->next;
        }

     
        if (p) {
            while (p) {
                current->next = p;
                p = p->next;
                current = current->next;
            }
        }

  
        if (q) {
            while (q) {
                current->next = q;
                q = q->next;
                current = current->next;
            }
        }

        current->next = nullptr;

        return head;
    }
};
