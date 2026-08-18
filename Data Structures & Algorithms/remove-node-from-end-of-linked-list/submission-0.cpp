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
        
        ListNode* slow = head;
        ListNode* fast = head;

        // Move Fast until we reach nth node
        for(int i=0;i<n;i++){
            fast = fast->next;
        }

        // If node to be deleted is head node then/ n = 0 then
        if(fast == NULL){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        // Agar element to be deleted is in middle somewhere
        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* nodeToDelete = slow->next;
        slow->next = nodeToDelete->next;
        delete nodeToDelete;
        return head;
    }
};
