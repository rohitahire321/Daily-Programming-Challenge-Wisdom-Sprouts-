#include <bits/stdc++.h>
using namespace std;

int main(){
    //Trapping rain water
    //[0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1] ----->>>> 6

    int n;
    cout<<"Enter the no. of rain bars u want: ";
    cin>>n;

    int water = 0;
    int rainyArray[n];
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        cin>>rainyArray[i];
    }

    // basically pge stores the previous greatest element
    vector<int>pge(n);
    int mx = rainyArray[0];
    pge[0] = -1;
    for(int i=1;i<n;i++){
        mx = max(mx,rainyArray[i-1]);
        pge[i] = mx;
    }

    // nge stores the next greatest element
    vector<int>nge(n);
    mx = rainyArray[n-1];
    nge[n-1] = -1;
    for(int i=n-2;i>=0;i--){
        mx = max(mx,rainyArray[i+1]);
        nge[i] = mx;
    }

    // min between pge and nge for trapped water calculation
    for(int i=0;i<n;i++){
        mx = min(nge[i],pge[i]);
        pge[i] = mx;
    }
    
    for(int i=0;i<n;i++){
        if(pge[i] > rainyArray[i]) water += pge[i] - rainyArray[i];
    }

    cout<<"The trapped water is: "<<water;
}
