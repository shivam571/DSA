#include<iostream>
using namespace std;
int fact(int n){
    if(n==0||n==1){
        return 1;
    }return n*fact(n-1);
}
int ncr(int n,int i){
    return (fact(n))/(fact(n-i)*fact(i));
}
int main(){
    int n;
    cout<<"enter the  value of n respectively :";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<ncr(n,i)<<"x^"<<i<<"y^"<<n-i<<" ";
    }
    return 0;
}