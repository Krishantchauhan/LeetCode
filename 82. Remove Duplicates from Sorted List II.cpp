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
        map<int,int>mp;

        ListNode* curr =head;
        while(curr!=NULL){
            mp[curr->val]++;
            curr=curr->next;
        }
        ListNode* nn = new ListNode(0);
        head=nn;

        for(auto it:mp){
            if(it.second == 1){
                nn->next=new ListNode(it.first);
                nn=nn->next;
            }
        }

        return head->next;
    }
};