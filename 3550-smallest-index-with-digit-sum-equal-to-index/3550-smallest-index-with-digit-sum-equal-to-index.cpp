class Solution {
public:
int digitsum(int a ){
    int sum = 0;
    while(a){
        sum+=(a%10);
        a/=10;
    }
    return sum;
}
    int smallestIndex(vector<int>& nums) {
        int ans = -1;
        
        for(int i = 0 ; i < nums.size();i++){
            int sum = digitsum(nums[i]);
            if(sum==i)return i;
        }
        return ans;
    }
};