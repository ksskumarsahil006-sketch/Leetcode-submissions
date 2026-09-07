class Solution {
    const int MOD=1e9+7;
public:
    int distinctSubseqII(string s) {
        int n  =  s.size();
        int t = 0;
        vector<int>freq(26,0);
        for(int i = 0; i < n ;i++){
            int index=s[i]-'a';
            int add=(t-freq[index]+MOD)%MOD;
            freq[index]=1+t;
            t=(freq[index]+add)%MOD;
            
        }
        return t;
        
    }
};