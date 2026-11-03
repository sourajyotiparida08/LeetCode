class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j=i+1; j<n; j++){
                if(j>i+1 && nums[j] == nums[j-1]) continue;
                int k = j+1, l = n-1; 
                while(k<l){
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    if(sum > target) l--; 
                    else if( sum < target) k++;
                    else {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        st.insert(temp);
                        k++; 
                        l--;
                    }
                }
            }
        }
        vector<vector<int>> result(st.begin(), st.end());
        return result;
    }
};