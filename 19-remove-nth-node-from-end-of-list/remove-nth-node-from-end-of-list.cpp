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
        ListNode*first=head;
        ListNode*last=head;
        while(n--){
            first=first->next;
        } if(first==NULL){
            return last->next;
        }

        while(first->next!=NULL){
            first=first->next;
            last=last->next;
        }
        last->next=last->next->next;
        return head;
    }
};