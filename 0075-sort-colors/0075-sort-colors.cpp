class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0; 
        int high = n-1;
        for(int mid =0; mid<n; mid++){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
            }
            else if(nums[mid] == 2 && mid< high){
                swap(nums[mid], nums[high]);
                high--;
                mid--;
            }
        }
    }
};