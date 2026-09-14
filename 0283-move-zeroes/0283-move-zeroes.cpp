class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int left = -1;
        for(int i =0; i<n; i++){
            if(nums[i] == 0) {
                left = i;
                break;
            }
        }
        if(left == -1) return ;
        for(int j = left+1; j<n; j++){
            if(nums[j] != 0){
                swap(nums[left], nums[j]);
                left++;
            }
        }
    }
};