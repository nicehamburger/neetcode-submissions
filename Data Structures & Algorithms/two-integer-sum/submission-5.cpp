class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int, int>> vec;
        for (int i = 0; i < nums.size(); i++){
            vec.push_back({nums[i], i});
        }

        int i = 0;
        int j = nums.size()-1;
        sort(vec.begin(),vec.end());

        while (i<j) {
            int expr = vec[i].first + vec[j].first;
            if (expr == target) return {min(vec[i].second, vec[j].second),max(vec[i].second, vec[j].second)};
            else if (expr > target) j--;
            else if (expr < target) i++;
        }
        return {};
    }
};
