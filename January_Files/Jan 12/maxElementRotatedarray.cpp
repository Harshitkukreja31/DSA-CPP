#include <bits/stdc++.h>

using namespace std;

int minBinaryRotated(int arr[],int n){
    int lo=0;
    int hi=n-1;
    int mid;
    while(lo<hi){
        mid=(lo+hi)/2;
        if(arr[mid]>arr[hi]){ //fault vaala
            lo=mid+1;
        }
        else if(arr[mid]<arr[hi]){
            hi=mid;
        }

    }
    return lo;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans= minBinaryRotated(arr,n);
    cout<<ans<<endl;
    return 0;
}