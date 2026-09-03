class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(),nums1.end());
        int n =  nums1.size();
        int even = 0;
        int odd = 0;
        if(n==1)return true;
        for(auto a:nums1){
            if(a%2==0)even++;
            else odd++;
        }
        if(nums1[0]%2==0 and odd>=1){
            return false;
        }
        return true;
    }
};