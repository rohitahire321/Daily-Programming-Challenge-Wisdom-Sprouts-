#include <bits/stdc++.h>
using namespace std;

void possible_Permutations(string s,int l,int r){

    if(l==r){
        cout<<s<<endl;
        return;
    }

    unordered_set<char> used;
    for(int i=l ; i<=r ; i++){
        if (used.count(s[i])) continue;
        used.insert(s[i]);
        swap(s[i],s[l]);
        possible_Permutations(s,l+1,r);
        swap(s[i],s[l]);
    }
}

int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;

    int n = s.size();
    cout<<"Possible Permutations are: "<<endl;
    possible_Permutations(s,0,n-1);
}
