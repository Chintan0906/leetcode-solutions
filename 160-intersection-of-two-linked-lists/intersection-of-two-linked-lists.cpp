/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*>st;
        ListNode*t=headA;
        while(t){
            st.insert(t);
            t=t->next;
        }
        t=headB;
        while(t){
            if(st.count(t)) return t;
            t=t->next;
        }
        return NULL;
    }
};