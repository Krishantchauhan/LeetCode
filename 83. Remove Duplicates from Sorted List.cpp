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
        set<int>s;

        while(head){
            s.insert(head->val);
            head=head->next;
        }
        ListNode* root=new ListNode();
        ListNode* temp=root;
        for(auto i:s){
            ListNode* nn = new ListNode(i);
            temp->next=nn;
            temp=nn;
        }
        return root->next;
    }
};