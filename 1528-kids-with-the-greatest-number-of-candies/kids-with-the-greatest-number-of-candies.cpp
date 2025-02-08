class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxcandy = *max_element(candies.begin(),candies.end());
        vector<bool> ans;
        for(auto i:candies){
            if(i+extraCandies>=maxcandy){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};