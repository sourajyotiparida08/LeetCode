class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int i = n-1, j=0;
       while(j<=i){
        if(nums[i] == val){
            i--;
            continue;
        }
        if(nums[j] == val){
            nums[j] = nums[i];
            i--;
        }
        j++;
       }
       return i+1;
    }
};