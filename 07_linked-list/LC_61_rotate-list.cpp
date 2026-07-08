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
        if(head == NULL || head->next==NULL|| k==0) return head;
        int len =1;
        ListNode* curr = head;
        while(curr->next!=NULL){
          curr= curr->next; 
            len++; 
        }
        //curr->next=head;
        k = k%len;
        if(k==0) return head;
        curr->next=head;
        int steps = len-k;

        ListNode* newcurr = curr;
        while(steps--){
            newcurr = newcurr->next;

        }
        ListNode* newhead = newcurr->next;
        newcurr->next=NULL;
        return newhead;

    }
};