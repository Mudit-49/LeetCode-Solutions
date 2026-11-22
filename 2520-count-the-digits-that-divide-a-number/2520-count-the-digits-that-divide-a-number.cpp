class Solution {
public:
    int countDigits(int num) {
        int count = 0, copy_var = num;
        while (copy_var != 0) {
            if (num % (copy_var % 10) == 0) {
                count++;
            }
            copy_var /= 10;
        }
        return count;
    }
};