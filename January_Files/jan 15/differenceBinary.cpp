#include <bits/stdc++.h>

using namespace std;

//nlog(n)

pair<int,int> differencePair(const int arr[],int n,int key){
   for(int i=0;i<n-1;i++){
       int check=arr[i]+key;
       int s=i+1;
       int e=n-1;
       while(s<=e) {
           int mid=s+(e-s)/2;
           if (check == arr[mid]) {
               return {i, mid};
           } else if (check > arr[mid]) {
               s = mid + 1;
           } else {
               e = mid - 1;
           }
       }
   }
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
    pair<int,int> ans= differencePair(arr,n,key);
    cout<<ans.first<<" "<<ans.second;
    return 0;
}