class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set store(nums.begin(),nums.end());
        int maxSeqLength = 0;
        for(auto i:store){
        int currSeqLength = 0;
            if(!store.count(i-1)){
                int j=i;
                while(store.count(j)){
                    currSeqLength++;
                    j++;
                }
                maxSeqLength = max(maxSeqLength,currSeqLength);
            }
        }
        return maxSeqLength;



        // long long size = 500;
        // vector<int> store(size,0);
        // for(int i:nums){
        //     store[i]=1;
        // }
        // bool subIsOn = false;
        // int currSeqLength = 0;
        // int maxSeqLength = 0;
        // for(int i:nums){
        //     if(i==1){
        //         subIsOn=true;
        //     }
        //     if(subIsOn){
        //         currSeqLength++;
        //     }
        //     if(i==0){
        //         subIsOn=false;
        //         maxSeqLength = max(maxSeqLength,currSeqLength);
        //         currSeqLength=0;
        //     }
        // }
        // return maxSeqLength;
    }
};