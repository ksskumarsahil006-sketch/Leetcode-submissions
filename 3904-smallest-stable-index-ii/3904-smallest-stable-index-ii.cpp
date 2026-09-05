class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>mini(nums.size(),0);
        int mi=INT_MAX;
        for(int i = nums.size()-1;i>=0;i--){
            mi=min(mi,nums[i]);
            mini[i]=mi;
        }
        int ma=INT_MIN;
        for(int i  = 0; i < nums.size();i++){
            ma=max(ma,nums[i]);
            if(ma-mini[i]<=k)return i;
        }
        return -1;
    }
};