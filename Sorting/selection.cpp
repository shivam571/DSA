#include<bits/stdc++.h>
using namesapce std;
int main(){
    int n;
    cout<<"enter the size of arraay: ";
    cin>>n;
    int arr[n];
    cout<<"enter the input: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"sorted array is: "
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    return 0;
}