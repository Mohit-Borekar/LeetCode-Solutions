class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int n = x;
        int num = 0 ;
        while(n !=0 ){
            int digit = n % 10;
            num = num + digit;
            n = n / 10;
        }
        if(x % num == 0){
            return num;
        }
        else{
            return -1;
        }
    }
};