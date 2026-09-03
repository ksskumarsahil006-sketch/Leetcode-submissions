class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mi =INT_MAX;
        int n =  nums1.size();
        int even = 0;
        int odd = 0;
        if(n==1)return true;
        for(auto a:nums1){
            mi=min(mi,a);
            if(a%2==0)even++;
            else odd++;
        }
        if(mi%2==0 and odd>=1){
            return false;
        }
        return true;
    }
};