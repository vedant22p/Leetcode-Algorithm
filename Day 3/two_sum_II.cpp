// Link to the problem: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/


// Solution:
class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        for(int i=0;i<num.size();++i){
            int x=num[i];
            int s=i+1,e=num.size()-1;
            while(s<=e){
                int mid=s+(e-s)/2;
                if(x+num[mid]==target)
                    return {i+1,mid+1};
                else if(x+num[mid]>target){
                    e=mid-1;
                }
                else
                    s=mid+1;
                mid=s+(e-s)/2;
            }
        }
        return {-1,-1};
    }
};
