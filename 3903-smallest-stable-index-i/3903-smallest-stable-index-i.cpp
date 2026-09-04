class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = nums[0];
        int minindex = -1;
        for(int i = 0; i<n; i++){
            maxi = max(maxi, nums[i]);
             int mini = INT_MAX;
            for(int j =i; j<n; j++){
                if(nums[j]< mini){
                    mini = nums[j];
                    minindex = j;
                }
            }
            int ans = maxi - mini;
            if(ans <= k) return i;
        }
        return -1;
    }
};