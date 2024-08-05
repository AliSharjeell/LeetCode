class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> counter;
        for(int i=0;i<arr.size();i++){
            counter[arr[i]]++;
        }
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(counter[arr[i]]==1){
                cnt++;
            }
            if(cnt==k){
                return arr[i];
            }
        }
        return "";
    }
};