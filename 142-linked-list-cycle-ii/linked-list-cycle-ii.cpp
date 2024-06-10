/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    ListNode *detectCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr; // No cycle in an empty list or a list with only one node
        }

        ListNode *slow = head;
        ListNode *fast = head;
        bool hascycle = false;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                hascycle=true;
                break;
            }

        }
        if(!hascycle){
            return NULL;
        } 

        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;

        }
        return slow;
    }
};