class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::unordered_set<int> seen;

        // Iterate through vector
        for (int num: nums) {
            
            // If element already in set
            if (seen.count(num)) {
                return true;
            }
            // If element not in set
            seen.insert(num);
        }
        return false;
    }
};