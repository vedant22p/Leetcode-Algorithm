// Link to the problem: https://leetcode.com/problems/reverse-words-in-a-string-iii/


//Solution:
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string temp,ans;
        while(ss>>temp){
            reverse(temp.begin(),temp.end());
            ans+= (temp+" ");
        }
        
        return ans.substr(0,ans.size()-1);
    }
};
