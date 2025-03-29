class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c=0;
        int n = nums.size();
        vector<int> ans;
        for(int i = 0 ; i <n ; i++)
        {
            if(nums[i]!=val){
            nums[c]=nums[i];
            c++;
            }

        }
        return c;

        
    }
};