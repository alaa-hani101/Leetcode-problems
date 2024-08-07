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
        if (!head) return nullptr;

        ListNode* temp = head;
        int numberOfNodes = 0;
        while (temp) {
            numberOfNodes++;
            temp = temp->next;
        }


        int targetPosition = numberOfNodes - n;
        if (targetPosition == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        temp = head;
        for (int i = 1; i < targetPosition; ++i) {
            temp = temp->next;
        }


        ListNode* nodeToRemove = temp->next;
        temp->next = nodeToRemove->next;
        delete nodeToRemove;

        return head;
    }
};
