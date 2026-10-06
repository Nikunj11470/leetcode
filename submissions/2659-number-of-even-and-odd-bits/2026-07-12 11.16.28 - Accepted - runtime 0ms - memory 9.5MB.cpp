class Solution {
public:
    vector<int> evenOddBit(int n) {
        string ans = "";

        while (n > 0) {
            ans += (n % 2) + '0';
            n /= 2;
        }

        reverse(ans.begin(), ans.end());

        int even = 0;
        int odd = 0;

        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] == '1') {

                // Position from the RIGHT (LSB)
                int pos = ans.size() - 1 - i;

                if (pos % 2 == 0)
                    even++;
                else
                    odd++;
            }
        }

        return {even, odd};
    }
};