class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next)
            return;
        ListNode* temp = head;
        while (temp->next->next)
            temp = temp->next;
        temp->next->next = head->next;
        head->next = temp->next;
        temp->next = NULL;
        reorderList(head->next->next);
    }
};
