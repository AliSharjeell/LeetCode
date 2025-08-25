class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int mid;
        while(l<r){
            mid = (r+l)/2;
            if((r-l)==1){
                return min(nums[l],nums[r]);
            }
            if(nums[l]<nums[mid]&&nums[mid]>nums[r]){
                l=mid;
            }
            else{
                r=mid;
            }
        }
        return nums[mid];
    }
};