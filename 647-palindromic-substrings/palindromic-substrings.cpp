class Solution {
public:
    int expandAroundIndex(string s, int i, int j) {
        int count = 0;
        while (i >= 0 && j < s.length() && s[i] == s[j]) {
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            // Odd
            int oddKaAns = expandAroundIndex(s, i, i);
            count = count + oddKaAns;
            // Even
            int evenKaAns = expandAroundIndex(s, i, i + 1);
            count = count + evenKaAns;
        }
        return count;
    }
};
