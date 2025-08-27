#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        int start = 0, maxLen = 1;
        
        for (int i = 0; i < s.size(); i++) {
            // Odd length palindrome
            expandFromCenter(s, i, i, start, maxLen);
            // Even length palindrome
            expandFromCenter(s, i, i + 1, start, maxLen);
        }
        return s.substr(start, maxLen);
    }

    void expandFromCenter(string &s, int left, int right, int &start, int &maxLen) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    }
};

int main() {
    Solution sol;
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << sol.longestPalindrome(s) << endl;
}
