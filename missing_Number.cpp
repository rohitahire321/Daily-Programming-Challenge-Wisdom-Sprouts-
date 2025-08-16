// ***Missing Number***
// n=4
// arr = [1,2,4,5]
// o/p = 3

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    long long sum = 0;

    int arr[n];
    cout<<"Enter distinct elements from range 1 to n+1: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }

    long long actual_sum = ((n+1)*(n+2))/2;
    cout<<"Missing Number(?) is: "<<(actual_sum - sum);
}
