class Solution {
    bool check(int n,long long curr){
        if(n==curr){
            return true;
        }
        else if(curr>n){
            return false;
        }
        return check(n,curr*4);
    }
public:
    bool isPowerOfFour(int n) {
        return check(n,1);
    }
};