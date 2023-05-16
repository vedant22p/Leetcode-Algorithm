// Link to the problem:


// Solution: https://leetcode.com/problems/letter-case-permutation/
class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> result;
        int length=s.length();
        letterCasePermutationRec(s,result,length,0);
        return result;
    }
    void letterCasePermutationRec(string& s,vector<string>& result,int length,int index){
        if(length==0){
            result.push_back(s);
        }else if(isalpha(s[index])){
            s[index]=toupper(s[index]);
            letterCasePermutationRec(s,result,length-1,index+1);
            s[index]=tolower(s[index]);
            letterCasePermutationRec(s,result,length-1,index+1);
        }else{
            letterCasePermutationRec(s,result,length-1,index+1);
        }
    }
};
