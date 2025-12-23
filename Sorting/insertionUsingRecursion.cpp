#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int i,int n){
    if(i==n){return;}
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }
    insertion(arr,i+1,n);
}
int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter the elements : "; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sorted array is : ";
    insertion(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}