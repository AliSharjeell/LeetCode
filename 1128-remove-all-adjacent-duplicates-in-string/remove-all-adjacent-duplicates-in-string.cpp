class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stac;
        // for(int j=0;j<s.length();j++)
        // {
            for(int i=0;i<s.length();i++){
                if(stac.empty()){
                    stac.push(s[i]);
                    // cout<<stac.top()<<" ";
                }
                else if(!stac.empty()&&stac.top()!=s[i]){
                    stac.push(s[i]);
                    // cout<<stac.top()<<" ";
                }
                else{
                    if(!stac.empty())
                    {
                        // cout<<"p"<<stac.top()<<" ";
                        stac.pop();
                    }
                }
            }
            s="";
            while(!stac.empty()){
                // cout<<stac.top()<<" ";
                s+= stac.top();
                stac.pop();
            }
            reverse(s.begin(),s.end());
            // cout<<s<<" ";
        // }
        return s;
    }
};