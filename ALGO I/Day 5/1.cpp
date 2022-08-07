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
    ListNode* middleNode(ListNode* head) {
        ListNode* s = head;
        ListNode* f = head;
        //cout << f->val;
        while(f!= nullptr){
            f = f->next;
            
            if (f==nullptr){
                break;
            }
            //cout << f->val;
            f = f->next;
            s = s->next;
        }
        return s;
        
    }
};
