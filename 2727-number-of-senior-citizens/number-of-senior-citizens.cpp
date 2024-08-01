class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;
        for(int i=0;i<details.size();i++){
            string s1 = "";
            s1 = details[i][11];
            string s2 = "";
            s2 = details[i][12];
            string agestr = "";
            agestr = s1+s2;
            cout<<agestr<<" ";
            int age = 0;
            age = stoi(agestr);
            if(age>60){
                cnt++;
            }
        }
        return cnt;
    }
};