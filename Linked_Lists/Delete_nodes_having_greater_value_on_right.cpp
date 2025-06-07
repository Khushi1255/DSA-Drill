class Solution {
  public:
     Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* curr = head;

        while (curr != NULL) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    Node* compute(Node* head) {
        // Step 1: Reverse the list
        head = reverseList(head);

        // Step 2: Delete nodes smaller than maxSoFar
        Node* curr = head;
        int maxSoFar = curr->data;

        while (curr != NULL && curr->next != NULL) {
            if (curr->next->data < maxSoFar) {
                // Delete the next node
                Node* temp = curr->next;
                curr->next = temp->next;
                delete temp;
            } else {
                // Update max and move forward
                curr = curr->next;
                maxSoFar = curr->data;
            }
        }

        // Step 3: Reverse the list again to restore order
        return reverseList(head);
    }
};
