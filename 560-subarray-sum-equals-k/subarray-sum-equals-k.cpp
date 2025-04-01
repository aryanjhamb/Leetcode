class Solution {
public:
    int subarraySum(vector<int>& arr, int d) {
        int n = arr.size();
        unordered_map<int,int> mp;
        int sum =0;
        int ans = 0; 
        for(int i = 0 ; i< n ; i++)
    {
        sum = sum +arr[i];
            if(sum==d)
            ans++;

        ans = ans + mp[sum-d];
        mp[sum]++;


    }
    return ans;

        
    }
};