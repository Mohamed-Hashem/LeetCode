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
    ListNode* deleteMiddle(ListNode* head) {
        
 if(head==NULL || head->next==NULL) 
     return NULL;   
    
    ListNode *prev=NULL, *slow = head, *fast = head;  
    
    while(fast!=NULL and fast->next!=NULL){                  
        prev=slow;                                        
        slow=slow->next;                                 
        fast=fast->next->next;                           
    }
    
    prev->next=slow->next;                              
        
    delete slow;                                       
        
    return head; 
    }
};