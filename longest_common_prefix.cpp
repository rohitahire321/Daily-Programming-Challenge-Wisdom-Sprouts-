#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of string: ";
    cin>>n;
    vector<string> pref(n);
    string ans = "";
    for(int i=0 ; i<n ; i++) cin>>pref[i];

    sort(pref.begin(),pref.end());
    string first = pref[0];
    string last = pref[n-1];

    for(int i=0 ; i<(min(first.size(),last.size())) ; i++){
        if(first[i] == last[i]) ans += first[i];
        else break;
    }

    cout<<"Longest Common Prefix is: "<<ans ;
}
