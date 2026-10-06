class Solution {
public:
    int findComplement(int n) {
        if (n == 0)
            return 1;

        string binary = "";

        while (n > 0) {
            binary += (n % 2) + '0';
            n = n / 2;
        }

        reverse(binary.begin(), binary.end());

        // Flip the bits
        for (int i = 0; i < binary.size(); i++) {
            if (binary[i] == '0')
                binary[i] = '1';
            else
                binary[i] = '0';
        }

        int p=stoi(binary,nullptr,2);
        return p;
    }
};


