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
        ListNode* temp = head;
        ListNode* prev = nullptr;
        int c = 0;

        // Count the number of nodes in the list
        while (temp != nullptr) {
            c++;
            temp = temp->next;
        }

        // If there's only one node in the list, return nullptr
        if (c == 1) {
            return nullptr;
        }

        temp = head;
        int k = c - n;

        // Traverse to the (c-n)th node
        while (k > 0) {
            prev = temp;
            temp = temp->next;
            k--;
        }

        // If the last node is to be removed
        if (n == 1) {
            prev->next = nullptr;
            return head;
        }

        // If the first node is to be removed
        if (n == c) {
            head = head->next;
            return head;
        }

        // Remove the nth node from the end
        prev->next = temp->next;

        return head;
    }
};
