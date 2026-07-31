class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> freq;
        for (int i = 0; i < s.length(); i++) {
            char es = s[i];
            char tee = t[i];
            freq[es]++;
            freq[tee]--;
        }

        for (auto c : freq) {
            if (c.second != 0) return false;
        }
        return true;
    }
};
