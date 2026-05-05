class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_len = s.length();
        int t_len = t.length();

        if (s_len != t_len) {
            return false;
        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        return s == t;


        // for(int i = 0; i < s_len; i++) {
        //     if (s[i] != t[i]) {
        //         return false;
        //     }
        // }
        // return true
    }
};

// check equal length ==> if not -- return false
// sort the letters in s and t
// iterate through each of the strings - even if at one iteration
// its not same --- return false; else continue & return true in the end