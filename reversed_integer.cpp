class Solution {
public:
    int reverse(int x) {
        string y = to_string(x);
        string z;

        if (y[0] == '-') {
            z += '-';
            for (int i = y.length()-1; i > 0; i--) {
                z += y[i];
            }
        } else {
            for (int i = y.length()-1; i >= 0; i--) {
                z += y[i];
            }
        }

        int reversedInt;
        try {
            reversedInt = stoi(z);
        } catch (const std::out_of_range& e) {
            reversedInt = 0;
        }

        return reversedInt;
    }
};
