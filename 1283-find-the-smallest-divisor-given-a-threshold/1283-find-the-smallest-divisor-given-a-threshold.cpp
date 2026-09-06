class Solution {
public:
int possible(vector<int> &arr, int div){
    int sum = 0;
    for(int i=0; i<arr.size(); i++){
        sum += ceil((double)arr[i]/(double)div);
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1, high = INT_MIN;
        for(int i=0; i<n; i++){
            high = max(high, nums[i]);
        }
        int ans = 0;
        while(low<=high){
            int mid =(low+high)/2;
            if(possible(nums,mid) <= threshold) {
                ans = mid;
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};