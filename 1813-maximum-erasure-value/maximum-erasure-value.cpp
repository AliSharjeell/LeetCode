class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        //2 pointers sliding window
        //main set for each slide - slide max is n times so n sets
        //i starts from 0 so does j and add j in the set then iterate j and check if that is in the set
        //also if not in set then add in vector 2D array of size n and inside each is varible length
        //if j element is in set then iterate i and j=i
        //i is also the index of the set and the vector array
        //tbh don't make 2D array waste of time - just add to sum of taht ith index - intialize vector with 0

        unordered_set<int> set;
        int sum=0;
        int largest = 0;
        int i=0 ,j=0;
        while(i<nums.size()&&j<nums.size()){
            if(!set.count(nums[j]))
            {
                sum+=nums[j];
                set.insert(nums[j]);
                largest=max(largest,sum);
                j++;
            }
            else{
                sum-=nums[i];
                set.erase(nums[i]);
                i++;
            }
        }
        return largest;



        // vector<unordered_set<int>> setArray(nums.size());
        // vector<int> sumArray(nums.size(),0);
        // int largest = 0;
        // int i=0;
        // int j=0;
        // while(i<nums.size()){
        //     while(j<nums.size()&&!setArray[i].count(nums[j])){
        //         sumArray[i]+=nums[j];
        //         setArray[i].insert(nums[j]);
        //         j++;
        //     }
        //     largest = max(largest,sumArray[i]);
        //     cout<<i<<" "<<sumArray[i]<<"  ";
        //     j=i;
        //     i++;
        // }
        // return largest;
    }
};