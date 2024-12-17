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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* pre1=nullptr;
        ListNode* cur1=l1;
        while(cur1!=nullptr){
            ListNode* tmp;
            tmp=cur1->next;
            cur1->next=pre1;
            pre1=cur1;
            cur1=tmp;
        }
        ListNode* pre2=nullptr;
        ListNode* cur2=l2;
        while(cur2!=nullptr){
            ListNode* tmp;
            tmp=cur2->next;
            cur2->next=pre2;
            pre2=cur2;
            cur2=tmp;
        }
        ListNode* dummy=new ListNode(0);
        ListNode* cur=dummy;
        int carry=0;
        while(pre1!=nullptr||pre2!=nullptr||carry){
            int sum=carry;
            if(pre1!=nullptr){
                sum+=pre1->val;
                pre1=pre1->next;
            }
            if(pre2!=nullptr){
                sum+=pre2->val;
                pre2=pre2->next;
            }
            carry=sum/10;
            cur->next=new ListNode(sum%10);
            cur=cur->next;
        }
        ListNode* pre3=nullptr;
        ListNode* cur3=dummy->next;
        while(cur3!=nullptr){
            ListNode* tmp;
            tmp=cur3->next;
            cur3->next=pre3;
            pre3=cur3;
            cur3=tmp;
        }
        return pre3;
    }
};