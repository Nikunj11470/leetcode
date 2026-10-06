class Solution {
public:

    int solve(string &s, int i, vector<int> &dp) {

        int n = s.length();

        if (i == n) {
            return 1;
        }

        if (s[i] == '0') {
            return 0;
        }

        // Already calculated
        if (dp[i] != -1) {
            return dp[i];
        }

        // Take one digit
        int ways = solve(s, i + 1, dp);

        // Take two digits
        if (i + 1 < n) {

            int num = (s[i] - '0') * 10
                    + (s[i + 1] - '0');

            if (num >= 10 && num <= 26) {
                ways += solve(s, i + 2, dp);
            }
        }

        dp[i] = ways;

        return ways;
    }

    int numDecodings(string s) {

        int n = s.length();

        vector<int> dp(n, -1);

        return solve(s, 0, dp);
    }
};