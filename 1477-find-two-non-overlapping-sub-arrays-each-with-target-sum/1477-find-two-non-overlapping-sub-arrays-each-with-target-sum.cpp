class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        // dp[i] will store the minimum length of a valid subarray ending at or before index i
        vector<int> dp(n, INT_MAX);
        
        int sum = 0;
        int left = 0;
        int min_len = INT_MAX;
        int ans = INT_MAX;
        
        for (int right = 0; right < n; right++) {
            sum += arr[right];
            
            // Shrink the window from the left if sum exceeds target
            while (sum > target) {
                sum -= arr[left];
                left++;
            }
            
            // If we found a valid subarray
            if (sum == target) {
                int curr_len = right - left + 1;
                
                // Check if there is a valid non-overlapping subarray to the left
                if (left > 0 && dp[left - 1] != INT_MAX) {
                    ans = min(ans, curr_len + dp[left - 1]);
                }
                
                // Update the minimum length found so far ending at or before 'right'
                min_len = min(min_len, curr_len);
            }
            
            dp[right] = min_len;
        }
        
        return ans == INT_MAX ? -1 : ans;
    }
};