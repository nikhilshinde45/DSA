class Solution {
public:
    int totalMoney(int n) {
       int w = n / 7, d = n % 7;
        int sum = 28 * w + 7 * (w * (w - 1)) / 2;
        sum += d * (w + 1) + (d * (d - 1)) / 2;
        return sum;

        
    }
};