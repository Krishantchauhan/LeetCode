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
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next==NULL)
            return true;

        ListNode* slow=head;
        ListNode* fast=head->next;
        
        stack<int>st;
        st.push(slow->val);
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            st.push(slow->val);
        }

        if(fast != NULL)
            slow=slow->next;
        
        while(!st.empty() && slow!=NULL){
            if(st.top()!=slow->val)
                return false;
            st.pop();
            slow=slow->next;
        }
        if(!st.empty())
            return false;
        return true;
    }
};