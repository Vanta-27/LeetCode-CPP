// Moore's Voting Algorithm used.
// If a majority element exist with >n/2 the majority element will cancle other element frequency
// ensuring only the majority element stays in the answer(ans).


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(), freq = 0, ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(freq == 0)
                ans = nums[i];
            if(ans == nums[i])
                freq++;
            else
                freq--;
        }
        return ans;
    }
};