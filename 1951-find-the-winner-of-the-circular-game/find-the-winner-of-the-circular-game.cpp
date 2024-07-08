class Solution {
public:
    int findTheWinner(int n, int k) {
        if(n==1){
            return 1;
        }
        vector<int> a(n);
        for(int i=0;i<n;i++){
            a[i]=i+1;
        }
        bool flag = true;
        int j=0;
        int jcnt = 0;
        int totalcnt = 0;
        while(flag){
            if(a[j%(n)]!=0){
                jcnt++;
                if(jcnt==k){
                    a[j%n]=0;
                    jcnt=0;
                    totalcnt++;
                }
            }
            j++;
            // int cnt0 = 0;
            // for(int i=0;i<n;i++){
            //     if(a[i]==0){
            //         cnt0++;
            //     }
            // }
            // if(cnt0==n-1){
            //     flag = false;
            //     break;
            // }
            // else{
            //     cnt0=0;
            // }
            if(totalcnt==n-1){
                cout<<totalcnt;
                flag= false;
                break;
            }
        }
        for(int i=0;i<n;i++){
                if(a[i]!=0){
                    return a[i];
                }
        }
        return 0;
    }
};