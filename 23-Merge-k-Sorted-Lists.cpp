class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size(),i=0;
        vector<int>v;
        while(i<n){
            ListNode *temp=lists[i];
            while(temp!=NULL){
                v.push_back(temp->val);
                temp=temp->next;
            }
            i++;
        }

        sort(v.begin(),v.end());

        ListNode *nn = new ListNode(0);
        ListNode *head=nn;

        for(int i=0;i<v.size();i++){
            nn->next=new ListNode(v[i]);
            nn=nn->next;
        }
        return head->next;
    }
};