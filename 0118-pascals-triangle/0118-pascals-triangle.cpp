class Solution {
public:
vector<int> genRows(int row){
    vector<int> ans; 
    ans.push_back(1);
    int res = 1; 
    for(int col=1; col<row; col++){
        res = res * (row-col);
        res = res / col;
        ans.push_back(res);
    }
    return ans;
}
    vector<vector<int>> generate(int numRows) {
     vector<vector<int>> res; 
     for(int row=1; row<=numRows; row++){
        vector<int> temp = genRows(row);
        res.push_back(temp);
     }
     return res;
    }
};