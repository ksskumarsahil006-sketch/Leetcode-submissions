class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n  = nums.size();
        int ma =INT_MIN;
        int mi = INT_MAX;
        vector<int>m1(n,0),m2(n,0);
        for(int i = 0; i < n ;i++){
            ma=max(ma,nums[i]);
            m1[i]=ma;
        }
        for(int i = n-1;i>=0;i--){
            mi=min(mi,nums[i]);
            m2[i]=mi;
        }
        for(int i = 0; i < n ;i++){
            if(m1[i]-m2[i]<=k)return i;
        }
        return -1;
    }
};