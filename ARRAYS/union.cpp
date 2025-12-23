#include<bits/stdc++.h>
using namespace std;
void unionarray(int a1[],int a2[],int n1,int n2){
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n1&&j<n2){
        if(a1[i]<a2[j]){
            if(ans.size()==0||ans.back()!=a1[i]){
            ans.push_back(a1[i]);
        }
        i++;
        }
        else if (ans.size()==0||ans.back()!=a2[j]){{
            ans.push_back(a2[j]);
        }
        j++;
        }
        else  {
            if (ans.empty() || ans.back() != a1[i]) {
                ans.push_back(a1[i]);
            }
            i++;
            j++;
        }
    }
    while(j<n2){
       if(ans.back()!=a2[j]){
            ans.push_back(a2[j]);
        }
        j++;
    }
    while(i<n1){
          if(ans.back()!=a1[i]){
            ans.push_back(a1[i]);
        }
        i++;
    }
    cout<<"Union of array is : ";
    for(auto it: ans){
        cout<<it<<" ";
    }
    cout<<endl;
}
int main(){
    int n1;
    cout<<"enter the size of array 1: ";
    cin>>n1;
    cout<<"enter the elements of array 1:";
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cout<<"enter the size of array 2: ";
    cin>>n2;
    cout<<"enter the elements of array 2:";
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
        
    }
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    unionarray(arr1,arr2,n1,n2);
}