class Solution {
public:
    bool isArmstrong(int n) {
       int count=0;
       int z=n;
        for(int i=1;z!=0;i++){
           z= z/10;
            count++;
        }
        z=n;
        int y=0;
        for(int i=1;z!=0;i++){
            y=y+pow(z%10,count);
                        z=z/10;
           
        }
        return y==n;
    }
};