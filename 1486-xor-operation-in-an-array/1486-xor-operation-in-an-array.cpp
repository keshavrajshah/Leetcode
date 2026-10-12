class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> ans(n);
        ans[0] = start;
        for(int i = 1; i < n; i++){
            ans[i] = start + 2 * i;
        }

        int soln = 0;
        for(int i = 0; i < n; i++){
            soln = soln ^ ans[i];
        }

        return soln;


    }
};