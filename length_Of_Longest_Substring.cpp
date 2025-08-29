#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> lastSeen;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.size(); right++) {
        char c = s[right];

        // If char already seen, move left pointer
        if (lastSeen.count(c) && lastSeen[c] >= left) {
            left = lastSeen[c] + 1;
        }

        lastSeen[c] = right;  // Update last seen index
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main() {
    string S;
    cout << "Enter string: ";
    cin >> S;

    cout << lengthOfLongestSubstring(S) << endl;
    return 0;
}
