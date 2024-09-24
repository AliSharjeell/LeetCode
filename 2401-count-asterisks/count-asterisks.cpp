class Solution {
public:
    int countAsterisks(string s) {
        bool flag = false;
        int cnt=0;
        for(int i=0;i<s.length();i++){
            if(flag==true&&s[i]=='|'){
                flag=false;
            }
            else if(flag==false&&s[i]=='|'){
                flag=true;
            }
            if(!flag&&s[i]=='*'){
                cnt++;
            }
        }
        return cnt;
    }
};