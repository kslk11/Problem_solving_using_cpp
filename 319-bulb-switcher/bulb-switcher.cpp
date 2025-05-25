class Solution {
public:
    int bulbSwitch(int n) {
        long long i=1;
        int a=0;
        while((i*i)<=n){
            i++;
            a++;
        }
        return a++;
    }
};