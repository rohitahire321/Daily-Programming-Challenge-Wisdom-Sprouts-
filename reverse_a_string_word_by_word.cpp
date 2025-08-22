#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "";
    vector<string> ans;
    string temp;
    cout<<"Enter the string: ";
    getline(cin,str);
    stringstream ss(str);

    while(ss>>temp){
        ans.push_back(temp);
    }
    reverse(ans.begin(),ans.end());
    
    string res = "";
    for(int i=0;i<ans.size();i++){
        res += ans[i];
        if(i != ans.size()) res += " ";
    }
    cout<<"Resulted string is: "<<res;
}
