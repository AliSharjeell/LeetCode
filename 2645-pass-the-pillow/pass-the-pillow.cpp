class Solution {
public:
    int passThePillow(int n, int time) {
        int flag = false;
        int counter = 1;
        for(int i=0;i<time;i++){
            if(!flag){
                counter++;
                if(counter==n){
                    flag=true;
                    continue;
                }
            }
            if(flag){
                counter--;
                if(counter==1){
                    flag=false;
                    continue;
                }
            }
        }
        return counter;
    }
};