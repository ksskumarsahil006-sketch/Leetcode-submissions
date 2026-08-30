class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return 1;
        if(n==2)return 2;
        int min_index=n;
        int max_index=n;
        int ma= INT_MIN;
        int mi=INT_MAX;
        for(int i = 0; i < n  ;i++){
            if(nums[i]<mi){
                mi=nums[i];
                min_index=i;
            }
            if(nums[i]>ma){
                ma=nums[i];
                max_index=i;
            }
             cout<<min_index<<" "<<max_index<<endl;
        }
       
        int lower = min(min_index,max_index);
        cout<<lower<<endl;
        int upper = max(max_index,min_index);
        cout<<upper<<endl;
        int max_remaining = max(n-upper-1,lower);
        cout<<max_remaining<<endl;
        max_remaining=max(max_remaining,upper-lower-1);
        cout<<max_remaining<<endl;
        return n-max_remaining;
    }
};