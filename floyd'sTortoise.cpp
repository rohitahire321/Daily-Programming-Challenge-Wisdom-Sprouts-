// ***Duplicate Number***
// n=4
// arr = [1,2,3,2]
// o/p = 2
// Floyd's Tortoise

#include<iostream>
using namespace std;
int findDuplicate(int arr[]){
    int slow = arr[0];
    int fast = arr[0];

    // detect cycle
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }
    while(slow != fast);

    //fins entry point
    slow = arr[0];
    while(slow != fast){
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow; // Duplicate Number.
}
int main(){
    int n;
    cout<<"Enter Array Size >1: ";
    cin>>n;

    //n size array with 1 to n-1 elements. 
    int arr[n];
    cout<<"Enter elements from range 1 to n-1: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Duplicate Number(?) is: "<<findDuplicate(arr);
}
