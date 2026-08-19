class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cashbox = 0;
        int countFive = 0;
        int countTen = 0;
        int countTwenty = 0;
        for (int i = 0; i < bills.size(); i++) {

            if (bills[i] == 5) {
                countFive++;
            }
            if (bills[i] == 10) {

                if (countFive > 0) {
                    cashbox = cashbox - 5;
                    countFive--;
                    countTen++;
                } else {
                    return false;
                }
            }
            if (bills[i] == 20) {

                if (countFive > 0 && countTen > 0) {
                    cashbox = cashbox - 15;
                    countFive--;
                    countTen--;
                    countTwenty++;
                } else if (countFive >= 3) {
                    countFive -= 3;
                } else {
                    return false;
                }

                cashbox = cashbox + bills[i];
            }
        }
        return true;
    }
};