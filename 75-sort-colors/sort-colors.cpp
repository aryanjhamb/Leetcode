class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int start =-1;
        int end = nums.size();
        for(int i = 0 ; i< n ; i++)
        {
            if(nums[i]==0)
            {
                start++;
                swap(nums[start],nums[i]);
            }

        }
          for(int i = n-1 ; i>=0 ; i--)
        {
            if(nums[i]==2)
            {
                end--;
                swap(nums[end],nums[i]);
            }

        }
        
    }
};