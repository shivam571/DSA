#include<bits/stdc++.h>
using namespace std;
void swaparray(int arr[],int s,int n){
    if(s<n){
        swap(arr[s],arr[n]);
        swaparray(arr,s+1,n-1);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swaparray(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}