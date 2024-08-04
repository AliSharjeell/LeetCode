class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int mod=1e9+7;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                // cout<<sum<<" ";
                arr.push_back(sum);
            }
        }
        sort(arr.begin(),arr.end());
        long long ans=0;
        for(int i=left-1;i<=right-1;i++){
            ans+=arr[i];
            ans%=mod;
            cout<<ans<<" ";
        }
        return ans;
    }
};