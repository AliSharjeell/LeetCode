class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> s;
        vector<int> a;
        for(int j=0;j<prices.size();j++)
        {
            s.push(prices[j]);
            for(int i=j+1;i<prices.size();i++){
                if(s.top()>=prices[i]){
                    int val = s.top()-prices[i];
                    s.pop();
                    s.push(val);
                    break;
                }
            }
        }
        while(!s.empty()){
            a.push_back(s.top());
            s.pop();
        }
        reverse(a.begin(),a.end());
        return a;
    }
};