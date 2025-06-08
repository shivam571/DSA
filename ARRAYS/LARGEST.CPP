#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest =arr[0];
    for(int i=0;i<n;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    cout<<"largest elemnt is : "<<largest;
}