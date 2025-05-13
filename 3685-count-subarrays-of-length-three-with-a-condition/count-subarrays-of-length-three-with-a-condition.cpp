class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int i=0,j=1,k=2;
        int ans =0;
        while(k!=nums.size()){
            cout<<nums[i]+nums[k]<<" "<<ceil(nums[j])/2<<"  ";
            if(nums[i]+nums[k]==ceil(nums[j])/2){
                ans++;
            }
            i++,j++,k++;
        }
        return ans;
    }
};