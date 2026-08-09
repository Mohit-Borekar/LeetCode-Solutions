class Solution {
public:
    int arrangeCoins(int n) {
        int count = n;
        int ans = 0;

        for (int i = 1; count >= i; i++) {
            count -= i;
            ans++;
        }

        return ans;
    }
};