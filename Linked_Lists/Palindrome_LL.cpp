class Solution {
public:
    bool check(ListNode*& start, ListNode* end) {
        if (end == NULL) {
            return true;
        }
        bool ans = check(start, end->next);
        bool ans2 = (start->val == end->val);
        ans = ans & ans2;
        start = start->next;
        return ans;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* start = head;
        ListNode* end = head;
        return check(start, end);
    }
};


//---------------------------------------------------------------------------

bool isPalindrome(ListNode* head)
{
    ListNode *temp=head;
    stack<int>st;
    while(temp!=NULL){
        st.push(temp->val);
        temp=temp->next;
    }
    temp=head;
    while(!st.empty()){
        if(st.top()!=temp->val)
        return false;
        temp=temp->next;
        st.pop();
    }
    return true;
}
