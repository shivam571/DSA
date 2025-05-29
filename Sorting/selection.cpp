#include<iostream>
using namespace std;
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
    for(int j=i;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
   }
    cout<<"sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}