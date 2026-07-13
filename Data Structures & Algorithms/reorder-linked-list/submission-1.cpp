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
 ListNode* revll(ListNode* head){
    if(head==nullptr || head->next==nullptr) return head;
    ListNode* newhead=revll(head->next); 
    ListNode* front=head->next;
    front->next=head;
    head->next=nullptr;
    return newhead;
 }
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* temp=head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=nullptr && fast->next->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* win=revll(slow->next);
        slow->next=nullptr;
        
        while(win!=nullptr)
        {
            ListNode* front=temp->next;
             ListNode* back=win->next;
            
            temp->next = win;               // link first → second
        win->next = front   ;           // link second → first.next

    temp = front;                   // move forward in first half
    win  = back;                    // move forward in second half
        }

      
    }
};
