class Solution {
public:
    static const int MOD = 1e9 + 7;

    int numberOfWays(int n, int x) {
        vector<int> powers;
        for (int i = 1;; i++) {
            long long val = pow(i, x);
            if (val > n)
                break;
            powers.push_back((int)val);
        }

        vector<int> dp(n + 1, 0);
        dp[0] = 1;

        for (int p : powers) {
            for (int j = n; j >= p; j--) {
                dp[j] = (dp[j] + dp[j - p]) % MOD;
            }
        }

        return dp[n];
    }
};