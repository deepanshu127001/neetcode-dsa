class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set <int> mSet;
        for(int i=0;i<nums.size();i++)
        {
            if(mSet.count(nums[i])>0)
                return true;
            mSet.insert(nums[i]);
        }
        return false;
    }
};