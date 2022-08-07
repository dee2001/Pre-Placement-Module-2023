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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr){
            return list2;
        }
        if(list2 == nullptr){
            return list1;
        }
        ListNode* me = new ListNode(123);
        ListNode* prev = me;
        ListNode* x = list2->next;
        me->next = list1;
        while (list1 && list2){
            if(list1->val > list2->val){
                prev->next = list2;
                prev = prev->next;
                list2->next = list1;
                list2 = x;
                if(!x){
                    break;
                }
                x = list2->next;
            }
            else{
                list1 = list1->next;
                prev = prev->next;
            }
        }
        if(list1==nullptr){
            prev->next = list2;
        }
        return me->next;
    }
};
