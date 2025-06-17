class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int original = x;
        while(x>0){
            int rem = x%10;
            sum+=rem ;
            x/=10;
        }
        return (original%sum == 0) ? sum : -1;
    }
};