class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int  n = nums.size();
        sort(nums.begin(),nums.end());
        int j  = 1;
        for(int i = 0; i < n ;i++){
            if(k*j==nums[i]){
                j++;
            }
            if(k*j<nums[i])return k*j;
        }
        return k*j;
    }
};