class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low =0, high=n-1;
        int ans = INT_MAX;
        while(low<=high){
            int mid= (low+high)/2;
            // Additional Optimal Part : You may remove it
            if(nums[low]<= nums[high]){
                ans = min(nums[low], ans);
                break;
            }
            //
            if(nums[low] <= nums[mid]){
                ans = min(nums[low], ans);
                low = mid+1;
            }
            else{
                ans = min(nums[mid],ans);
                high = mid-1;
            }
        }
        return ans;
    }
};