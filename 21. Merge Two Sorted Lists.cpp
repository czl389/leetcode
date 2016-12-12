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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* l3=new ListNode(0);
        ListNode* node=l3;
        ListNode *node1=l1,*node2=l2;
        //头疼，最害怕链表题了，容易写死，node->next=node这就是个死结啊，node=node->next才代表迭代
        while(node1!=NULL||node2!=NULL) {
            if(node1==NULL) {
                node->next=node2;
                node2=node2->next;
            }
            else if(node2==NULL) {
                node->next=node1;
                node1=node1->next;
            }
            else {
                if(node1->val<=node2->val) {
                    node->next=node1;
                    node1=node1->next;
                }
                else {
                    node->next=node2;
                    node2=node2->next;
                }
            }
            node=node->next;
        }
        return l3->next;
    }
};