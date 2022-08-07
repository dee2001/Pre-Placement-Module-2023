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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return head;
        ListNode* dummy = new ListNode(123,head);
        
        ListNode* prev = dummy;
        ListNode* curr = head;
        ListNode* x = head->next;
        
        while(x){
            if(curr->val == x->val){
                while(x && x->val == curr->val){
                    x = x->next;
                }
                prev->next = x;
                curr = x;
                if(x)
                x = curr->next;
            }
            else{
                prev = prev->next;
                curr = curr->next;
                x = x->next;
            }
        }
        return dummy->next;
    }
};
