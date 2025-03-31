class Solution {
public:
    bool isPalindrome(int x) {
        long r = 0;
        int temp = x;
        if (x < 0)
            return false;
        else
            while (x != 0) {
                r = r * 10 + x % 10;
                x = x / 10;
            }
        if (r > INT_MAX || r < INT_MIN)
            return 0;
        if (r == temp) {
            return true;
        } else
            return false;
    }
};
