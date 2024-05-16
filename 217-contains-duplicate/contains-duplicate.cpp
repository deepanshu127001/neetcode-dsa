class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int val:nums){

            mp[val]++;
            auto iter = mp.find(val);
            if(iter!=mp.end()&&iter->second>1)
                return true;
        }
        return false;
    }
};