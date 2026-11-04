/// Leetcode-268 Missing Number
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int small=0,large=nums.size();
        for(int i=0;i<large;i++)
        {
            if(small>nums[i])
            {
                small=nums[i];
            }
        }
        for(int i=small;i<=large;i++)
        {
            if(!(ranges::contains(nums,i)))

            {
                return i;
            }
        }
        return 0;
        
    }
};