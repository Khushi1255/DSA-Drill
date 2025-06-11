class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2,int carry=0){
        ListNode* n=new ListNode();
        if(l1 and l2){
            int num=l1->val +l2->val +carry;
            carry=num/10;
            num=num%10;
            n->val=num;
            n->next=addTwoNumbers(l1->next, l2->next,carry);
        }else if(l1){
            int num=l1->val+carry;
            carry=num/10;
            num=num%10;
            n->val=num;
            n->next=addTwoNumbers(l1->next,l2,carry);
        }else if(l2){
            int num=l2->val+carry;
            carry=num/10;
            num=num%10;
            n->val=num;
            n->next=addTwoNumbers(l1,l2->next,carry);
        }else if(carry>0){
            n->val=carry;
        }else return nullptr;
        return n;
    }
};    
