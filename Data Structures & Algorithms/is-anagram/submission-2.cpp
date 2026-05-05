class Solution {
public:
    bool isAnagram(string s, string t) {

        // Check size equal
        if (s.length() != t.length()) {
            return false;
        }
        
        // Build frequency array
        int freq[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (int i: freq) {
            if (i != 0) return false;
        }
        return true;
    }
};

// Given s and t only have lowercase letters
// Assume 'a' is at index 0
// Therefore, 'a' - 'a' = 0
// Character's index found when subtracted by 'a'
