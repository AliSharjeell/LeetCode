class Solution {
    int sum(vector<int> freq){
        int sum=0;
        for(auto i:freq){
            sum+=i;
        }
        return sum; 
    }
public:
    int characterReplacement(string s, int k) {
        // bool set=false;
        int i=0;
        int finalanswer = 0;
        int j=0;
        vector<int> freq(26,0);
        while(j<s.length()){
            freq[s[j]-'A']++;
            j++;
            int maxfreq = *max_element(freq.begin(),freq.end());
            cout<<maxfreq<<" "<<finalanswer<<"  ";
            // if((sum(freq)-maxfreq)>k){
                if(s.length()==maxfreq){
                    finalanswer = max((maxfreq),finalanswer);
                }
                else if((maxfreq+k)>s.length()){
                    int size=s.length();
                    finalanswer= max(size,finalanswer);
                }
                else{
                    finalanswer = max((maxfreq+k),finalanswer);
                }
                while(((j-i)-maxfreq)>k && i<s.length()){
                    freq[s[i]-'A']--;
                    i++;
                    maxfreq = *max_element(freq.begin(),freq.end());
                }
            // }
        }
        return finalanswer;
    }
};