#include <bits/stdc++.h>

using namespace std;

void insert(int arr[],int pos,int key,int& n){
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=key;
    n++;
}
void deletion(int arr[],int pos,int &n)
{
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
}
//two pointer
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n= sizeof (arr)/sizeof (arr[0]);
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    int *ptr=arr;
    cout<<endl;
    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<endl;
    int key=10;

    n++;
    arr[n-1]=key;
    cout<<arr[n-1]<<endl;
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    int pos=3;
    insert(arr,pos,key,n);
    cout<<endl;
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    deletion(arr,pos,n);
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    reverse(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}