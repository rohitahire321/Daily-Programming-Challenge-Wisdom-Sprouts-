#include <bits/stdc++.h>
using namespace std;

int atMostKDistinct(const string& s, int k) {
    int n = s.size();
    int left = 0, count = 0;
    unordered_map<char, int> freq;

    for (int right = 0; right < n; right++) {
        freq[s[right]]++;

        // shrink window if more than k distinct chars
        while ((int)freq.size() > k) {
            freq[s[left]]--;
            if (freq[s[left]] == 0) {
                freq.erase(s[left]);
            }
            left++;
        }

        // all substrings ending at right
        count += (right - left + 1);
    }
    return count;
}

int countExactlyKDistinct(const string& s, int k) {
    if (k == 0) return 0;
    return atMostKDistinct(s, k) - atMostKDistinct(s, k - 1);
}

int main() {
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int k;
    cout<<"Enter how many exactly distinct elements u want: ";
    cin>>k;
    cout << countExactlyKDistinct(str, k) << endl;   
    return 0;
}
