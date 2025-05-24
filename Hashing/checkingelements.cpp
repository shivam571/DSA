#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={1,2,3,1,2,3,4,5,6,7};
    int hash[8]={0};
    for(int i=0;i<8;i++){
        hash[arr[i]]++;
    }
    for(int i=0;i<8;i++){
        cout<<i<<" ->"<<hash[i]<<endl;
    }
}