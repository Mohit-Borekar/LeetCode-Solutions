class Solution {
public:
    int smallestEvenMultiple(int n) {
        int ans = 1;
        if(n%2 == 1){
            ans = n*2;
        }
        else{
            ans = ans*n;
        }
        return ans;
    }
};