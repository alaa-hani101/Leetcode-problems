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
    void reorderList(ListNode* head) {
        vector<ListNode*> nodes;

        ListNode* temp = head;

        while(temp){
            nodes.push_back(temp);
            temp = temp->next;
        }

        int statrt = 1, end = size(nodes)-1;

        for (int i = 0 ; i < size(nodes); ++i){
            if (i % 2 == 0){
                head->next = nodes[v];
                end--;
            }
            else{
                head->next = nodes[statrt];
                statrt++;
              
            }
            head = head->next;
        }

        head->next = nullptr;
        
    }
   
};
