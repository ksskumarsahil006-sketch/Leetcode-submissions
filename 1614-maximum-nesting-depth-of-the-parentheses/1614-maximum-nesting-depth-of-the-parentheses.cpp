class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int answer = 0;
        for (auto a : s) {
            if (a == ')')
                ans -= 1;
            if (a == '(')
                ans += 1;
            answer = max(ans, answer);
            cout << ans << endl;
        }
        return answer;
    }
};