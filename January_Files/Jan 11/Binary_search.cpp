#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[],int n,int key){
    int lo=0;
    int hi=n-1;
    int mid;
    while(lo<=hi){
        mid=lo+(hi-lo)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int res= binarySearch(arr,n,key);
    if(res!=-1){
        cout<<"element found at "<<res;
    }
    else{
        cout<<"element not found";
    }
    return 0;
}