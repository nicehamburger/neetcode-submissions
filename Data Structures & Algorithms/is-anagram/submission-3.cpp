class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) {
            return false;
        }

        int freq_count[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            freq_count[s[i] - 'a']++;
            freq_count[t[i] - 'a']--;
        }
        
        for (int val: freq_count) {
            if (val != 0) return false;
        }
        return true;
    }
};
