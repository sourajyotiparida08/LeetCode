class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mpp;
        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            int reqNum = target - num;
            if(mpp.find(reqNum) != mpp.end()){
                return {mpp[reqNum], i};
            }
            else mpp[num] = i;
        }
        return {-1,-1};
    }
};