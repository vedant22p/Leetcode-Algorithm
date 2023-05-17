// Link to the problem: https://leetcode.com/problems/climbing-stairs/


// Solution:
class Solution {
public:
    int climbStairs(int n) {
      if(n == 1 ) return 1;
    int ekpiche = 2;
    int dopiche = 1;
       for(int  i =3;i<=n;i++)
       {
          int curr  = ekpiche + dopiche;
          dopiche = ekpiche;
          ekpiche = curr;        
      }

      return ekpiche;
    }
};
