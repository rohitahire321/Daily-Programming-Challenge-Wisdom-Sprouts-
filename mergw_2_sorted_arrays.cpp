// Sort Two Sorted Arrays
// arr1 = [1,3,5,7]
// arr2 = [2,4,6,8]
// o/p arr1 = [1,2,3,4]
// arr2 = [5,6,7,8]

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the length of 1st array: ";
    cin>>m;
    cout<<"Enter the length of 2nd array: ";
    cin>>n;
    
    int arr1[m];
    int arr2[n];
    cout<<"Enter the arr1's random sorted Elements: ";
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the arr2's random sorted Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }

    int i = m-1; // arr1's pointer
    int j = 0; // arr2's pointer
    for(int k=0 ; k<min(m,n) ; k++){
        if(arr1[i] > arr2[j]) swap(arr1[i],arr2[j]);
        i--;
        j++;
    }
    sort(arr1,arr1+m);
    sort(arr2,arr2+n);
    
    cout<<"Sorted Arrays: "<<endl;
    cout<<"arr1[] = ";
    for(int i=0;i<m;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"arr2[] = ";
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
}
