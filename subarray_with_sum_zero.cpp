#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> findZeroSumSubarrays(vector<int>& arr) {
    unordered_map<long long, vector<int>> mp;  // prefixSum -> list of indices
    vector<pair<int,int>> result;
    long long prefix = 0;

    for(int i=0; i<arr.size(); i++){
        prefix += arr[i];

        // Case 1: prefix sum is zero -> subarray (0..i)
        if(prefix == 0){
            result.push_back({0, i});
        }

        // Case 2: prefix sum seen before -> all subarrays between those indices
        if(mp.find(prefix) != mp.end()){
            for(int idx : mp[prefix]){
                result.push_back({idx+1, i});
            }
        }

        // Store current index
        mp[prefix].push_back(i);
    }
    return result;
}

int main(){
    vector<int> arr = {1, 2, -3, 3, -1, 2};
    vector<pair<int,int>> ans = findZeroSumSubarrays(arr);

    for(auto &p : ans){
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;
}
