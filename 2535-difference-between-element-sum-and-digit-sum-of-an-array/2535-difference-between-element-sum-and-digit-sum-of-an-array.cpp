class Solution {
public:
    int differenceOfSum(vector<int>& nums) {

        int size = nums.size();
        int eleSum = 0;
        int absSum = 0;
        
        int digit;
        int ans = 0;
        for(int i = 0; i<size; i++){
            
            eleSum = eleSum + nums[i];
            
            int temp = nums[i];

            while(temp>0){
            digit = temp%10;
            absSum = absSum + digit;
            temp = temp/10;
        }
        }
        

        ans = eleSum - absSum;
        return ans;
        

        
    }
};