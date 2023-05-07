// Link to the problem: https://leetcode.com/problems/squares-of-a-sorted-array/


// Solution: 
class Solution {
public:
    vector<int> sortedSquares(vector<int>& v) {
        for_each(v.begin(),v.end(),[](int &x){x*=x;});
        sort(v.begin(),v.end());
        return v;
    }
};
