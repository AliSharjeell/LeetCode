class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0;
        int finalanswer = 0;
        int j=0;
        vector<int> freq(26,0);
        while(j<s.length()){
            freq[s[j]-'A']++;
            j++;
            int maxfreq = *max_element(freq.begin(),freq.end());
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
        }
        return finalanswer;
    }
};