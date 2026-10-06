class Solution {
public:
    bool increase(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }

    bool decrease(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                return false;
            }
        }
        return true;
    }

    bool isMonotonic(vector<int>& nums) {
        if (increase(nums) || decrease(nums)) {
            return true;
        }

        return false;
    }
};