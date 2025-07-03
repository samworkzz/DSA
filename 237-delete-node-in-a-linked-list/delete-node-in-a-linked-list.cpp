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
    void deleteNode(ListNode* node) {
        ListNode*temp=node->next;
        ListNode*dummy=new ListNode(0);
        if(temp->next==NULL){
            dummy->next=NULL;
        }
        else{
            dummy->next=temp->next;
        }
        temp->next=dummy;
        node->val=temp->val;
        node->next=dummy;
        temp->next=NULL;
        node->next=dummy->next;
        dummy->next=NULL;
        delete dummy;
    }
};