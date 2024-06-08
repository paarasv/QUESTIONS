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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*a=head,*b=head,*c=head,*prev=NULL;
        while(k--){
            prev=a;
            a=a->next;//ye start node hai , first node to swap
            b=b->next;//ye fisrt hai 
        } if(b==NULL){
            swap(prev->val,c->val);
            return head;
        }

        while(b->next!=NULL){
            b=b->next;
            c=c->next; //ye vo node hoga jo swapping node k pehle hoga 
        }


        swap(prev->val,c->next->val);
        return head;



    }
};