// link to the problem: https://leetcode.com/problems/power-of-two/


// Solution:
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && not (n & n - 1);
    }
};
