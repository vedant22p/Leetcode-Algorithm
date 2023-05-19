// Link to the problem: https://leetcode.com/problems/single-number/


// Solution:
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int emptylist = 0;
        for(int i=0; i<nums.size(); i++){
            emptylist = emptylist^nums[i];
        }
        return emptylist;
    }
};
