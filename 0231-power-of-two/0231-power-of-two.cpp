class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 2;
        if(n==1){
            return 1;
        }
        if(n%2 == 0){
                while(ans < n && ans <= INT_MAX / 2){
                    ans = ans * 2;
                }
                return ans == n;
        }
        return 0;
    }
};