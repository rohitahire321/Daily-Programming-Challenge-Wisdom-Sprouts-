// Find leaders in an array
// arr1 = [1,3,5,7]
// o/p arr1 = [7]
// arr2 = [5,6,7,8]

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    
    int array[n];
    vector<int> leader;
    cout<<"Enter the array's Elements: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int max_leader = array[n-1];
    leader.push_back(array[n-1]);

    for(int i=n-2;i>=0;i--){
        if(array[i] > max_leader){
            max_leader = array[i];
            leader.push_back(array[i]);
        }
    }
    int i = 0;
    int j = leader.size()-1;
    while(i<j){
        int temp = leader[i];
        leader[i] = leader[j];
        leader[j] = temp;
        i++;
        j--;
    }
    for(int i = 0;i<leader.size();i++){
        cout<<leader[i]<<" ";
    }
}
