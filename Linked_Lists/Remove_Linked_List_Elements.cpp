class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
          if(!head) return head;
          ListNode *prev = nullptr,*curr = head;
          while(curr){
              if(curr->val == val){
                  if(!prev) head = curr->next;
                  else prev->next = curr->next;
                  } else
                      prev=curr;
                      curr=curr->next;
              }
              return head;
    //-----------------------------------------------------------------------------------------------------------------------
        ListNode* temp = nullptr;
        ListNode* temp2 = head;
        while (temp2 != nullptr) {
            if (temp2->val == val) {
                if (temp == nullptr) { // temp null h mtlb temp2 jo h head pe
                                       // hai
                    head = head->next;
                    temp2 = head;
                } else if (temp2->next == nullptr) {//last node pe hai ye
                    temp->next = nullptr;
                    break;
                } else {
                    temp2 = temp2->next;
                    temp->next = temp2;
                }

            } else {
                temp = temp2;
                temp2 = temp->next;
            }
        }
        return head;
    }
};
