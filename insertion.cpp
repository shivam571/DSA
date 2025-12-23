#include<iostream>
using namespace std;
int main(){
    int arr[1000]={31, 41, 59, 26, 41, 58};
    int n=6;
    // for(int i=1;i<n;i++){
    //   int  key=arr[i];
    //     int j=i-1;
    //     while(j>=0&&arr[j]>key){
    //         arr[j+1]=arr[j];
            
    //         j--;
    //     }
    //     arr[j+1]=key;

    // }
    //descending order code
    for(int i=1;i<n;i++){
      int  key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]<key){
            arr[j+1]=arr[j];
            
            j--;
        }
        arr[j+1]=key;

    }
  
     for (int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}