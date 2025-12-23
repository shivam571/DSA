#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x%10==0&&x!=0)){
            return false;
           
        }
        
        else{
            int n,y;
            y=0;
           while(x>y){
            n=x;
            n=n%10;
            y=y*10+n;
            x=x/10;
           }
           if(x==y||x==y/10){
            return true;
           }
           else {return false;}
        }
          }
};