class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen_set;

        for(int num : nums){
            if (seen_set.count(num)) {
                return true;
            }
            seen_set.insert(num);
        }
        return false;
    }
};

// 1. Create a hashset
// 2. Iterative through the vector
// 3. Check if current element in hashset
//    ==> Yes - return true
//    ==> No  - insert element
// 4. Iteration completed - return false