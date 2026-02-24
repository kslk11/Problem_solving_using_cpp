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
        ListNode * temp = head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        if(count==1) return NULL;
        int mid = count/2;
        ListNode * prev = head;
        ListNode * curr = head;
        while(mid!=0){
            prev =curr;
            curr=curr->next;
            mid--;
        }
        prev->next = curr->next;
        curr->next=NULL;
        delete(curr);
        return head;
    }

};