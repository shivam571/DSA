#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i =0;i<n;i++){
         int didswap=0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                 didswap=1;
            }
        }
         if(didswap=0){
        return ;
    }
    }
    cout<<"sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubblesort(arr,n);
    return 0;
}