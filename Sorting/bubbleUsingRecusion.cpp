#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
    if(n==1)return;
    for(int j=0;j<n-2;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    bubblesort(arr,n-1);

}
int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    cout<<"enter the elements : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
    cout<<"sorted arraay is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}