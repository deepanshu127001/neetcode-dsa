class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int value= target-nums[i];
            if(mp.find(value)!=mp.end())
            {
                auto val=mp.find(value);
                return {val->second,i};
            }
                mp.insert({nums[i],i});
        }
        return {};
    }
};