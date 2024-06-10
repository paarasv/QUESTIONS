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
        bool hasCycle = false;

        // Find if there is a cycle
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                hasCycle = true;
                break;
            }
        }

        // If there is no cycle, return nullptr
        if (!hasCycle) {
            return nullptr;
        }

        // Reset slow to head, and start moving both slow and fast at the same pace
        slow = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        // They will meet at the entry point of the cycle
        return slow;
    }
};