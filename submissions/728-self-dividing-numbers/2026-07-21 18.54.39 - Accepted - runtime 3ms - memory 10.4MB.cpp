class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {

        vector<int> ans;

        for(int i = left; i <= right; i++) {

            string p = to_string(i);

            bool valid = true;

            int j = 0;

            while(j < p.size()) {

                int digit = p[j] - '0';

                // Number contains 0
                if(digit == 0) {
                    valid = false;
                    break;
                }

                // Digit does not divide the number
                if(i % digit != 0) {
                    valid = false;
                    break;
                }

                j++;
            }

            if(valid) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};