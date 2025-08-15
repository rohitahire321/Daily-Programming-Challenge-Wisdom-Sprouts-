#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int array[n];
    
    cout<<"Enter the Array Elements between 0 to 2: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    //Dutch Flag Algorithm
    //Play with 0's and 2's
    int lo = 0;
    int mid = 0;
    int hi = n-1;

    while(mid<=hi){
        if(array[mid] == 2){
            int temp = array[mid];
            array[mid] = array[hi];
            array[hi] = temp;
            hi--;
        }
        else if(array[mid] == 0){
            int temp = array[mid];
            array[mid] = array[lo];
            array[lo] = temp;
            lo++;
            mid++;
        }
        else mid++;
    }
    
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}
