class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if(nums.size() == 0) return 0;
        
        int k = 1, n = nums.size(), write = 1;
        for(int i = 0; i < n-1; i++)
        {
            if(nums[i] != nums[i+1])
            {
                nums[write] = nums[i+1];
                k++, write++;
            }
        }

        return k;
    }
};