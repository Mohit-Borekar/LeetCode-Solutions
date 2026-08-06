class Solution {
public:
    long mySqrt(long x) {
        long ans = 1;
        if(x == 1 || x == 0){
            return x;
        }
        if(ans <= x/2 ){
            while( ans*ans <= x){
            ans = ans + 1;
            }
            ans = ans - 1;
        }
        return ans;
    }
};