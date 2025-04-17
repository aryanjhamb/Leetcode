class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0;
        int n = nums.size();
        int high =n-1;
        if(n==1)
        return 0;
        while(low<high)
        {
           int mid = (low+high)/2;
            if(nums[mid]<nums[mid+1])
            {
                low = mid+1;
            }
            else 
            high = mid;
        }
        return low;

    }
};