class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
         const long long MOD = 1000000007;
        
        long long num1 = 0, num2 = 0;
        
        // Convert first list to number
        while (first != NULL) {
            num1 = (num1 * 10 + first->data) % MOD;
           first = first->next;
        }

        // Convert second list to number
        while (second != NULL) {
            num2 = (num2 * 10 + second->data) % MOD;
            second = second->next;
        }

        // Multiply and take modulo
        return (num1 * num2) % MOD;
    }
};
