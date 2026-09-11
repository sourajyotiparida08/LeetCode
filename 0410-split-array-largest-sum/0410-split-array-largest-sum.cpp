class Solution {
public:
int check_K(vector<int> &nums, int k){
    int ans = 1, subarr=0;
    for(int i= 0; i<nums.size(); i++){
    if(subarr + nums[i] > k){
        ans++;
        subarr = nums[i];
    }
    else{
        subarr += nums[i];
    }
    }
    return ans;
}
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while(low<=high){
            int mid = (low+high)/2;
            int ans = check_K(nums, mid);
            if(ans <= k) high = mid-1;
            else low = mid+1;
        }
        return low;
    }
};