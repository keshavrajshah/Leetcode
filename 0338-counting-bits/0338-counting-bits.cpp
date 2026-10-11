
class Solution {
public:
    bool checkBits(int i, int bit) {
        int mask = 1 << bit;
        return (i & mask) != 0;
    }

    vector<int> countBits(int n) {
        vector<int> ans;

        for (int i = 0; i <= n; i++) {
            int count = 0;

            for (int bit = 0; bit < 32; bit++) {
                if (checkBits(i, bit)) {
                    count++;
                }
            }

            ans.push_back(count);
        }

        return ans;
    }
};
