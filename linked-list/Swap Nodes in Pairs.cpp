Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's 
  nodes (i.e., only nodes themselves may be changed.)
  
  
  https://leetcode.com/problems/swap-nodes-in-pairs/ 


class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* slow=head;
        if(head==NULL)
            return head;
     
        while(slow && slow->next)
        {
            swap(slow->val,slow->next->val);
            slow=slow->next->next;
        }
        return head;
        
    }
};
