class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n = nums.size();
       int i =-1;
       for(int j= 0; j<n; j++){
        if(nums[j]== 0){
            i = j; 
            break;
        }
       }
       for(int j = i+1; j<n; j++){
        if(nums[j] != 0){
            if(i != -1){
            swap(nums[j], nums[i]);
            i++;
            }
        }
       }
    }
};