#include<iostream>
using namespace std;
int fact(int n){
if(n==0||n==1){
    return 1;
}
else{
    return n*fact(n-1);
}
}
int main(){
    int n,r;
    cout<<"enter the n and r respectively:";
    cin>>n>>r;
    int ncr=(fact(n)/fact(n-r)*fact(r));
    cout<<ncr;
    return 0;
}