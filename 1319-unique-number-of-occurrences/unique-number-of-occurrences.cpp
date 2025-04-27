class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int , int> mpp;
        for(int i = 0 ; i< arr.size() ; i++)  
        {
            mpp[arr[i]]++;
        }
           set<int> freq_set;
        for (auto entry : mpp) {
            if (freq_set.find(entry.second) != freq_set.end()) {
                return false;
            }
            
            freq_set.insert(entry.second);
        }
        return true;
    }
};