class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        unordered_map<int ,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int maxfreq=0;int minfreq=nums.size();
        int maxelement=0;int minelement=0;
        for(auto it: mpp){
            int count = it.second;
            int element=it.first;
            if(count>maxfreq){
                maxfreq=count;
                maxelement=it.first;
            }
            if(count<minfreq){
                minfreq=count;
                minelement=it.second;
            }
        }
        return maxelement;
    }
};