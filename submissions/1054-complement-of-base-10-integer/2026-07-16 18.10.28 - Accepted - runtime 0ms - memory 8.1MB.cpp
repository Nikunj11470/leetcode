class Solution {
public:
    int bitwiseComplement(int n) {

        if (n == 0)
            return 1;

        string binary = "";

        while (n > 0) {
            binary = char((n % 2) + '0') + binary;
            n /= 2;
        }

        for (int i = 0; i < binary.size(); i++) {
            if (binary[i] == '1') {
                binary[i] = '0';
            } else {
                binary[i] = '1';
            }
        }

        int num = stoi(binary, nullptr, 2);
        return num;
    }
};