class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *curr = head;
        int count = 0;

        while (curr != NULL)
        {
            count++;
            curr = curr->next;
        }

        int k = count - n + 1;
        if (k == 1)
        {
            ListNode *newHead = head->next;
            delete head;
            return newHead;
        }
        else
        {
            curr = head;
            ListNode *prev = NULL;
            for (int i = 1; i < k; i++)
            {
                prev = curr;
                curr = curr->next;
            }

            prev->next = curr->next;
            delete curr;
            return head;
        }
    }
};
