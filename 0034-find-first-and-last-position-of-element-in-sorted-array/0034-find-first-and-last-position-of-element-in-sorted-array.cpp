class Solution {
public:
int First(vector<int> &nums, int target){
    int low = 0, high = nums.size() -1;
    int ans = nums.size();
    while(low<=high){
        int mid = (low + high) /2;
        if(nums[mid] >= target){
            ans = mid;
            high = mid-1; 
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int Second(vector<int> &nums, int target){
    int low = 0, high = nums.size()-1;
    int ans= nums.size(); 
    while(low<= high){
        int mid = (low + high)/2;
        if(nums[mid] > target ){
            ans = mid;
            high = mid-1;
        }
        else{
            low =mid+1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb = First(nums, target);
        if(lb == nums.size() || nums[lb] != target) return {-1,-1};
        return {lb, Second(nums, target)-1};
    }
};