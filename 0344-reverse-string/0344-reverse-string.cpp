class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int st = 0, end = n-1;
        for(int i=0; i<n/2; i++){
            swap(s[st], s[end]);
            st++;
            end--;
        }
    }
};