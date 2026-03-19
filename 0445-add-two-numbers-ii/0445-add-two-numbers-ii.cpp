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

ListNode* reversell(ListNode* head){
    if(!head || head->next == NULL) return head;

    ListNode * newh = reversell(head->next);
    head->next->next= head;
    head->next = NULL;
    return newh;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        int carry = 0;
        l1 = reversell(l1);
        l2 = reversell(l2);
        while(l1!=NULL || l2!=NULL){
            int sum = carry;
            if(l1){
                sum += l1->val;
            }
            if(l2){
                sum += l2->val;
            }
            ListNode* newn = new ListNode(sum%10);
            carry = sum/10;
            curr->next = newn;
            curr =curr->next;
            if(l1){
                l1 = l1->next;
            }
            if(l2){
                l2 = l2->next;
            }
        }
        if(carry){
            ListNode* newn = new ListNode(carry);
            curr->next = newn;
            curr=curr->next;
            //curr->next = NULL;

            ListNode* ans = reversell(dummy->next);
            return ans ;
        }

       ListNode* ans = reversell(dummy->next);
            return ans ;
        
    }
};