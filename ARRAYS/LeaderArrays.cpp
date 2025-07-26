// tuf platform problem solution problem 61
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      int n=nums.size();
      vector<int>result;
      int maxR=nums[n-1];
      result.push_back(maxR);
      for(int i=n-2;i>0;i--)
{if(nums[i]>maxR){
    maxR=nums[i];
    result.push_back(nums[i]);
}
}   
reverse(result.begin(),result.end());
return result;
 }
};