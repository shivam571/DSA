#include<iostream>
#include<math.h>
using namespace std;
long long pawr(long long a,long long b){
    if(b==0){
        return 1;
    }
    long long half=pawr(a,b/2);
     if(b%2==0){
        return half*half;
    }  else{
        return a*half*half;
    }
}
int main(){
    int a,b;
    cout<<"enter the base and power respectively:";
    cin>>a>>b;
    long long result=pawr(a,b);
    cout<<result;
    return 0;
}