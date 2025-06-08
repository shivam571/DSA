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
    int largest = INT_MIN;//USE THIS FOR MANYY  TEST CASES ARE AVAILABLE SUCH AS -VE NUMBER
    for(int i=0;i<n;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    int slargest=INT_MIN;
    for(int i=0;i<n;i++){
        if(slargest<arr[i]&& (!(arr[i]==largest))){
            slargest=arr[i];
        }
    }
    cout<<" second largest elemnt is : "<<slargest;
}