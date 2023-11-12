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
    ListNode* rotateRight(ListNode* head, int k) {
        int size = 1 ;
        ListNode* temp = head;
        
       if (!head || !head->next || !k) {
            return head;
        }
        
        while(temp && temp->next)
        {
            size++;
            temp = temp->next;
        }
        
        if (k > size)
            k = k % size;
        
        while(k--){
            ListNode* temp = head;
            ListNode* prev = temp;
            while(temp && temp->next)
            {
                prev = temp;
                temp = temp->next;
            }
            
            prev->next = nullptr;
            temp->next = head;
            head = temp;
        }
        
        return head;
    }
};