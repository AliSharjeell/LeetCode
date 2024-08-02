// class Solution {
// public:
//     int minSwaps(vector<int>& nums) {
//         int doublecnt=0;
//         if(nums[0]==1){
//             int i=0;
//             for(i=0;i<nums.size();i++){
//                 if(nums[i]==0){
//                     break;
//                 }
//             }
//             for(i;i<nums.size();i++){
//                 if(nums[i]==1){
//                     break;
//                 }
//             }
//             for(i;i<nums.size();i++){
//                 cout<<nums[i]<<" "<<i<<"  ";
//                 if(nums[i]==1){
//                     doublecnt++;
//                 }
//                 else if(nums[i]==0){
//                     break;
//                 }
//                 if(i==nums.size()-1){
//                     i=-1;
//                 }
//             }
//         }
//         int cnt1=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]){
//                 cnt1++;
//             }
//         }
//         if(doublecnt==cnt1){
//             return 0;
//         }
//         int i=0;
//         int j=1;
//         int cnt=0;
//         while(j<nums.size()&&nums[i]==0){
//             i++;
//             j++;
//         }
//         while(j<nums.size()){
//             cnt+=nums[i];
//             cnt+=nums[j];
//             j++;
//         }
//         j--;
//         while(nums[j]==0){
//             j--;
//         }
//         return ((j-i)+1)-cnt1;
//     }
// };

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int cnt=0;
        for(int i:nums){
            if(i){
                cnt++;
            }
        }
        int i=0;
        int j=i+cnt-1;
        int cntwin = 0;
        for(i;i<=j;i++){
            if(nums[i]){
                cntwin++;
            }
        }
        i=0;
        j=i+cnt-1;
        vector<int> ansarr;
        ansarr.push_back(cnt-cntwin);
        while(i<nums.size()){
            cntwin-=nums[i];
            j++;
            cntwin+=nums[j%nums.size()];
            i++;
            ansarr.push_back(cnt-cntwin);
        }
        return *min_element(ansarr.begin(),ansarr.end());
    }
};