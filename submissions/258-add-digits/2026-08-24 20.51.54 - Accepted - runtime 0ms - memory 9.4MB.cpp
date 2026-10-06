class Solution {
public:
    int addDigits(int num) {
        string p = to_string(num);

        int sum = 0;

        for (int i = 0; i < p.size(); i++) {
            sum += p[i] - '0';
        }

        while (sum >= 10) {
            int temp = sum;
            sum = 0;

            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
        }

        return sum;
    }
};