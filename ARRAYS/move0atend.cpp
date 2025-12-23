//leetcode238
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
    int i;
    if(n>1){
    for (int j=0;j<n;j++){
        i=j;
        if(nums[j]==0){
            i++;
            while(i<n){
                if((nums[i] != 0) ){
                nums[j]=nums[i];
                nums[i]=0;
                break;}
                else{i++;}
            }
        }
      }
      
    }
    }
};