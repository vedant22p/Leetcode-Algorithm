// Link to the problem: https://leetcode.com/problems/permutations/


// Solution:
class Solution {
public:
    void per(vector<vector<int>>&ans,int idx,vector<int>&nums)
    {
        if(idx==nums.size())
        {
            ans.push_back(nums);
        }
        for(int i=idx;i<nums.size();i++)
        {
            swap(nums[i],nums[idx]);
            per(ans,idx+1,nums);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        int idx = 0;
        per(ans,idx,nums);
        return ans;    
    }
};
