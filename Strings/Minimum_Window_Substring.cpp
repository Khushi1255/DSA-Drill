class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) return "";

        vector<int> count(128, 0);
        for (char ch : t) count[ch]++;

        int l = 0, r = 0, required = t.size();
        int minLen = INT_MAX, start = 0;

        while (r < s.size()) {
            if (count[s[r++]]-- > 0) required--;

            while (required == 0) {
                if (r - l < minLen) {
                    minLen = r - l;
                    start = l;
                }
                if (count[s[l++]]++ == 0) required++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};
