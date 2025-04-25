class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int > mpp;
        for(int i = 0;  i< nums.size()  ; i++)
        {
           int curr = nums[i];
           int need = target-curr;
           if(mpp.find(need)!=mpp.end())
           {
            return {mpp[need],i};
           }
           else
           mpp[curr]=i;
        }
        return {-1,-1};
    }
};