// Calculate the left and right indexes (prefix and suffix of nums[i]) 
// Calculate the prefix for nums[i] and save it directly to ans[i]
// Calculate the suffix for nums[i] and save it directly to ans[i]
// Since we calculat the prefix and store it directly to ans[i]
// calculating suffix is automatically multiplying with the prefix as we already multiplied prefix
// and saved to ans[i]
// This approach keeps the time complexity to O(n) and space complexity to O(1).

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        ans[0] = 1;

        // calculating prefix
        for(int i=1; i<n; i++){
            ans[i] = ans[i-1] * nums[i-1];
        }
        int suffix = 1;
        for(int i=n-1; i>=0; i--){
            ans[i] *= suffix;
            suffix *= nums[i];
        }
        return ans;
    }
};