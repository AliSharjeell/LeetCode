class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        string num="000";
        set<int> ansbefore;
        for(int i=0;i<digits.size();i++){
            if(digits[i]%2!=0){
                continue;
            }
            for(int j=0;j<digits.size();j++){
                if(i==j){
                    continue;
                }
                for(int k=0;k<digits.size();k++){
                if(i==j||j==k||i==k){
                    continue;
                }
                    num[2]=digits[i]+'0';
                    num[1]=digits[j]+'0';
                    num[0]=digits[k]+'0';
                    int number = stoi(num);
                    if(to_string(number).length()==3)
                    {ansbefore.insert(number);}
                }
            }
        }
        vector<int> ans;
        for(int i:ansbefore){
            ans.push_back(i);
        }
        return ans;
    }
};