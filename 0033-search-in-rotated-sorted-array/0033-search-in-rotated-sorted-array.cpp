class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<int> temp = {6,7,0,1,2,3,4,5};
        int st = 0, end = nums.size()-1;
        while(st <= end)
        {
            int mid = st + (end - st)/2;
            if(target == nums[mid]) return mid;
            if(nums[st] <= nums[mid]) // left sorted array
            {
                if(nums[st] <= target && target <= nums[mid])
                {
                    end = mid-1;
                }
                else
                {
                    st = mid+1;
                }
            }
            else // right sorted array
            {
                if(nums[mid] <= target && target <= nums[end])
                {
                    st = mid+1;
                }
                else
                {
                    end = mid-1;
                }
                
            }
        }
        return -1; // target not in array.
    }
};