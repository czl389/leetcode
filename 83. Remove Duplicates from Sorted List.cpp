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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* node=head;
        if(head==NULL)
            return head;
        while(node->next!=NULL) {
            if(node->val==node->next->val) {
                if(node->next->next==NULL)
                    node->next=NULL;
                else {
                    ListNode* p=node->next->next;
                    node->next=p;
                }
            }
            else
            node=node->next;
        }
        return head;
    }
};
