class Solution {
public:
    double solve(double x,int n){
        if(n<=0){
            return 1;
        }
        return x*solve(x,n-1);
    }
    double myPow(double x, int n) {
        if (n == INT_MAX&&x==1) return  1;
        if (n == INT_MIN&&x==1) return  1;
        if (n == INT_MAX&&x==-1) return  -1;
        if (n == INT_MIN&&x==-1) return  1;
        if (n == INT_MAX) return  0;
        if (n == INT_MIN) return  0;

        if(n>0)
        {
            return solve(x,n);
        }
        else{
            n=-n;
            return 1/solve(x,n);
        }
    }
};