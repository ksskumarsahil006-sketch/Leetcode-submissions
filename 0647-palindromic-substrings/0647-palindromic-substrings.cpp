class Solution {
public:
    int countSubstrings(string s) {
        int ans = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            ans += expand(s, i, i, n);
            ans += expand(s, i, i + 1, n);
        }
        return ans;
    }
    int expand(string& s, int left, int right, int& n) {
        int ans = 0;
        for (; left >= 0 and right <= n; left--, right++) {
            if (s[left] == s[right])
                ans++;
            else
                return ans;
        }
        return ans;
    }
};