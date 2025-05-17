#include<bits/stdc++.h>
using namespace std;
void print(int i,int n){
    if(i==0){
        return ;
    }
    else{
        cout<<"*";
       return print(i-1,n);
    }
}
int main(){
    int n;
    cin>>n;
    print(n,n);

}