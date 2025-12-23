#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the bits of imnary numbers:";
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n+1);
    cout<<"enter the elements of a: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the elements of b: ";
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int carry=0;
    for(int i=n-1;i>=0;i++){
       int sum=a[i]+b[i]+carry;
        c[i+1]=sum%2;
        carry=sum/2;

    }
    c[0]=carry;
    for(int i=0;i<=n;i++){
        cout<<c[i];
    }


}