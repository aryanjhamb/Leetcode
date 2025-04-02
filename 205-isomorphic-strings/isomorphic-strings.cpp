class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int> m;
        unordered_map<char,int> n;

        if(s.length()!=t.length())
        return false;

        for(int i = 0 ; i< s.length() ; i++)
       {
        if (m.find(s[i]) == m.end()) {
                m[s[i]] = i;
            }
            if (n.find(t[i]) == n.end()) {
                n[t[i]] = i;
            }
            if (m[s[i]] != n[t[i]]) {
                return false;
            }
        }
        return true;

        
        
    }
};