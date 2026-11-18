class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN, currentSum = 0;
        for(auto value : nums)
        {
            currentSum += value;
            maxSum = std::max(currentSum, maxSum);
            if(currentSum < 0)
                currentSum = 0;
        }
        return maxSum;
    }
};