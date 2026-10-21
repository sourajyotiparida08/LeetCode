class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> fans; 
       for(int row = 1; row<= numRows; row++){
        vector<int> temp;
        int ans = 1;
        temp.push_back(1);
        for(int col = 1; col<row; col++){
            ans *= (row-col);
            ans /= col;
            temp.push_back(ans);
        }
        fans.push_back(temp);
       }
       return fans;
    }
};