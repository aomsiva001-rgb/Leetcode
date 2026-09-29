//Leetcode
//35.Search Insert position
//Level : Easy


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
        }
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<target)
            {
                j++;
            }
            else
            {
                break;
            }
        }
        return j;
    }
};