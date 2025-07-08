class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int i:nums){
            if(!set.insert(i).second){
                return true;
            }
        }
        return false;
    }
};