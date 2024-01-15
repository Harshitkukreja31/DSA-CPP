#include <bits/stdc++.h>

using namespace std;

pair<int,int> binaryFL(int arr[],int key,int n){
    int lo=0;
    int hi=n-1;

    int first=-1;
    int last=-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==key){
            first=mid;
            hi=mid-1;
        }
        else if(arr[mid]>key){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    lo=0;
    hi=n-1;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(arr[mid]==key){
            last=mid;
            lo=mid+1;
        }
        else if(arr[mid]>key){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return {first,last};
}

pair<int,int> firstLast(int arr[],int key, int n){
    int first =-1;
    int last=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            if(first==-1){
                first=i;
                last=i;
            }
            else{
                last=i;
            }
        }
    }
    return {first,last};
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
    pair<int,int> ans1= firstLast(arr,key,n);
    cout<<ans1.first<<" "<<ans1.second<<endl;
    pair<int,int> ans2= binaryFL(arr,key,n);
    cout<<ans2.first<<" "<<ans2.second<<endl;
    return 0;
}