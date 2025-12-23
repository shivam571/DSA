#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;//size of arr
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the numbers:";
    for(int i=0;i<n;i++){
        cin>>arr[i];//array input
    }
    int key;
    cin>>key;//target number;
    int index=-1;
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            index=i;
            break;
        }
    }
   if(index!=-1){
    cout<<"element fouund at :"<<index;
   }
   else{
    cout<<"elemnt is not found";
   }
    
    return 0;

}