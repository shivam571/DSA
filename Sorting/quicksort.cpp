#include<bits/stdc++.h>
using namespace std;
int f(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot&&i<=high){
            i++;
        }
        while(arr[j]>pivot&&j>low){
            j--;
        }
        if(i<j)swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);//swapping the pivot
    return j;

}
void qs(int arr[],int low,int high){
if(low<high){
    int pindex=f(arr,low,high);//partition index finding
    qs(arr,low,pindex-1);
    qs(arr,pindex+1,high);
}
}
int main(){
    int n;
    cout<<"enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements : ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    qs(arr,0,n-1);
    cout<<"sorted array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}