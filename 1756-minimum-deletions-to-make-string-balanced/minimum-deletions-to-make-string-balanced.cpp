class Solution {
public:
    int minimumDeletions(string s) {
        int acnt = 0, bcnt = 0;
        vector<int> barr(s.length());
        
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == 'b') {
                bcnt++;
            }
            barr[i] = bcnt;
        }

        int mini = INT_MAX;
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a') {
                acnt++;
            }
            mini = min(mini, (int)s.length() - (acnt + barr[i]));
        }

        return mini;
    }
};
