class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int sum = 0;
        while (temp) {
            sum = sum * 2 + temp->val;
            temp = temp->next;
        }
        return sum;
    }
};
