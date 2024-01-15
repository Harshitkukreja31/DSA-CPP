#include <bits/stdc++.h>

using namespace std;

int leastEvenNumber(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid;
    int ans;
    while(s<=e){
        mid=s+(e-s)/2;
        if(arr[mid]%2!=0){
            s=mid+1;
        }
        else{
            ans=mid;
            e=mid-1;
        }
    }
    return mid;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans= leastEvenNumber(arr,n);
    cout<<ans;
    return 0;
}