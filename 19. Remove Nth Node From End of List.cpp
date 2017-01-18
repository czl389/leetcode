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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //计算链表长度
        int length=0;
        ListNode* node=head;
        while(node!=NULL) {
            length++;
            node=node->next;
        }
        //如果是去头
        if(length==n) {
            ListNode* tmp=head->next;
            head=tmp;
            return head;
        }
        int loops=length-n-1;
        node=head;
        while(loops!=0) {
            loops--;
            node=node->next;
        }
        //如果是去尾
        if(n==1) {
            node->next=NULL;
        }
        //去中间节点
        else {
            ListNode* tmp=node->next->next;
            node->next=tmp;
        }
        return head;
    }
};