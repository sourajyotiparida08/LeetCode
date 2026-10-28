class Solution {
public:
    vector<int> getRow(int rowIndex) {
       int n = rowIndex;
       vector<int> ans;
       long long el = 1;
       ans.push_back(1);
       for(int i = 0; i<n; i++){
        el = el * (n-i);
        el = el / (i+1);
        ans.push_back(el);
       }
       return ans;
    }
};