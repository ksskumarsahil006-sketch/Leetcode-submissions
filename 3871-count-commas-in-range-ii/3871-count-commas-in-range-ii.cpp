class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        if (n > 999)
            ans += n - 999;
        if (n > 999999)
            ans += n - 999999;
        if (n > 999999999L)
            ans += n- 999999999;
        if (n > 999999999999L)
            ans += n - 999999999999;
        if (n > 999999999999999L)
            ans += n - 999999999999999L;
        if (n > 999999999999999999L)
            ans += n - 999999999999999999L;
        return ans;
    }
};