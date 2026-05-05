class Solution {
public:
    bool isAnagram(string s, string t) {

        // Check size equal
        if (s.length() != t.length()) {
            return false;
        }

        // Sort Characters
        std::sort(s.begin(),s.end());
        std::sort(t.begin(),t.end());

        // Compare
        return (s == t);
    }
};

// An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.