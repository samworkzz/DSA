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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(head==NULL) return nullptr;
        unordered_map<int,bool>present;
        for(int num: nums){
            present[num]=true;
        }
        ListNode*prev=new ListNode(-1);
        prev->next=head;
        ListNode*curr=head;
        bool first=false;

        while(curr!=NULL){
            if(present[curr->val]){
                prev->next=curr->next;
                curr->next=NULL;
                curr=prev->next;
            }
            else{
                if(!first){
                    first=true;
                    head=curr;
                }
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};