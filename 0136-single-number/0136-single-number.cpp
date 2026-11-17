// bitwise XOR operation:
// 0^1 = 1
// 1^0 = 1
// 0^0 = 0
// 1^1 = 0

// Using bitwise XOR we can find the single unique element in the array.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = nums[0];
        for(int i = 1 ; i < nums.size(); i++)
        {
            result ^= nums[i];
        }
        return result;
    }
};