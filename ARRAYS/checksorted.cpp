//leetcode solution
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int x = 0;
        int check = 0;

        for (int i = 0; i < n ; i++) {
            if (nums[i] <= nums[(i + 1)%n] ) {
                
            } else {
                check++;
            }
        }
    if(check>1){
        return false;
    }
    else{
        return true;
    }
    }
};
