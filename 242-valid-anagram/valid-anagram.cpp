class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = t.length();
        int m = s.length();

        if (n != m)
            return false;
        unordered_map<char, int> freqMap1;
        for (char ch : s) {
            freqMap1[ch]++;
        }
        for (char ch : t) {
            freqMap1[ch]--;
        }
         for (auto it : freqMap1) {
        if (it.second != 0) return false;  

    
    }
    return true;
    }
};