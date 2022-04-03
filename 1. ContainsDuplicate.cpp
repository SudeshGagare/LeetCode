class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set<int> myset;
        for(int i=0;i<nums.size();i++)
        {
            if(myset.count(nums[i]))
            {
                return true;
            }
            else
            {
                myset.insert(nums[i]);
            }
        }
        return false;
    }
        
 
};

//Runtime: 110 ms, faster than 70.26% of C++ online submissions for Contains Duplicate.
//Memory Usage: 51.3 MB, less than 66.93% of C++ online submissions for Contains Duplicate. */
