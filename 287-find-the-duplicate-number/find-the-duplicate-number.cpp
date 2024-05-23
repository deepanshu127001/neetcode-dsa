class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        //moving slow one step
        slow = nums[slow];
        //moving fast two steps
        fast=nums[nums[fast]];

        while(slow!=fast){
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        //cycle dectected;
        //reset slow = nums[0]index move slow and fast by 1 step
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        // return slow or fast
        return fast;
    }
};