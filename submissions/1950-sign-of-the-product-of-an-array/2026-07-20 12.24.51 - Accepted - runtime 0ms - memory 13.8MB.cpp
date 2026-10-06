class Solution {
public:
    int signFunc(int n) {
        if (n > 0)
            return 1;
        else if (n < 0)
            return -1;
        return 0;
    }

    int arraySign(vector<int>& nums) {

        int product = 1;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 0)
                return 0;

            product *= signFunc(nums[i]);   // Multiply only the sign
        }

        return signFunc(product);
    }
};