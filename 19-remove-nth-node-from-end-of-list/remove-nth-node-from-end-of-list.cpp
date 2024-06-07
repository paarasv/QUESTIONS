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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp = head;
        ListNode*prev=NULL;
        int c = 0;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        } 

        if(c==1){
            return NULL;
        }

        
        temp = head;
        int k = c-n;

        while(k>0){
          prev=temp;
          temp = temp->next;
          k--;
        } 
        if(n==1){
            prev->next=NULL;
            return head;
        } else if(c==n){
           head = head->next;
           return head;
        } 

        prev->next=temp->next;
        return head;

        
    }
};