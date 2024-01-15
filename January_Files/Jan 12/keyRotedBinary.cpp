#include <bits/stdc++.h>

using namespace std;

int keyRotated(int arr[],int n,int key){
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>=arr[lo]){
            
        }
        else {
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
    int ans= keyRotated(arr,n,key);
    cout<<ans<<endl;
    return 0;
}