class Solution {
  public:
    Node* segregate(Node* head) {
         // Step 1: Count how many 0s, 1s, and 2s are in the list
        int countZero = 0, countOne = 0, countTwo = 0;
        
        Node* current = head;

        // Traverse the list and count each value
        while (current != NULL) {
            if (current->data == 0) countZero++;
            else if (current->data == 1) countOne++;
            else if (current->data == 2) countTwo++;
            current = current->next;
        }

        // Step 2: Overwrite the list with sorted values (first 0s, then 1s, then 2s)
        current = head;

        // Fill in 0s
        while (countZero--) {
            current->data = 0;
            current = current->next;
        }
        // Fill in 1s
        while (countOne--) {
            current->data = 1;
            current = current->next;
        }

        // Fill in 2s
        while (countTwo--) {
            current->data = 2;
            current = current->next;
        }
        // Return the head of the sorted list
        return head;
        
    }
};
