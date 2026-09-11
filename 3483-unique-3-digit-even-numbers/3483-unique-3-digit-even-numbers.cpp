class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int i  = 0,j=0,k=0;
        int n = digits.size();
        set<int>answers;
        for(int i = 0;i < n;i++){
            if(digits[i]==0)continue;
            int l = digits[i]*100;
            for(j = 0; j < n ;j++){
                if(j==i)continue;
                int m = digits[j]*10;
                for(k=0;k< n;k++){
                    if(k==i || k==j)continue;
                    int current = l+m+digits[k];
                    if(current%2==0)answers.insert(current);
                } 
            }
        }
        return answers.size();
    }
};