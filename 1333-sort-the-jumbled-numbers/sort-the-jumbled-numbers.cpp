// class Solution {
// public:
//     vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
//         vector<pair<int,int>> arr;
//         for(int i=0;i<nums.size();i++){
//             string a ="";
//             a=to_string(nums[i]);
//             for(int j=0;j<a.length();j++){
//                 a[j] = (mapping[(a[j]-'0')])+'0';
//             }
//             arr.push_back({stoi(a),nums[i]});
//         }
//         sort(arr.begin(),arr.end());
//         vector<int> ans;
//         for(int i=0;i<arr.size();i++){
//             cout<<arr[i].first<<" ";
//             ans.push_back(arr[i].second);
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        auto translate_integer = [&](int num) -> int {
            string digits = to_string(num);
            for (char& digit : digits) {
                digit = '0' + mapping[digit - '0'];
            }
            return stoi(digits);
        };

        unordered_map<int, int> number_mapping;
        for (int num : nums) {
            if (number_mapping.find(num) == number_mapping.end()) {
                number_mapping[num] = translate_integer(num);
            }
        }

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            return number_mapping[a] < number_mapping[b];
        });

        return nums;
    }
};