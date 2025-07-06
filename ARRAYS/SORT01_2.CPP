#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements of array: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
         if (arr[i] != 0 && arr[i] != 1 && arr[i] != 2) {
            cout<<"incorrect input! \n try again ";
            return 0;
        };
    }
    //brute
    int count1=0;int count2=0;int count3=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count1++;
        }
        else if(arr[i]==1){
            count2++;
        }
        else{
            count3++;
        }
    }
    //making sorted array
    int index=0;
    for(int i=0;i<count1;i++){
        arr[index++]=0;
    }
    for(int i=0;i<count2;i++){
        arr[index++]=1;
    }
    for(int i=0;i<count3;i++){
        arr[index++]=2;
    }
    cout<<"sorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}