class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count  = 0;
        int n = arr1.size();
        int r = arr2.size();
        for(int i  = 0; i < n ;i++){
            bool flag  =  true;
            for(int j = 0 ; j < r ; j++){
                if(abs(arr1[i]-arr2[j])<=d){
                    flag = false;
                    break;
                }
            }
            if(flag)count++;
        }
        return count ;

        }
};