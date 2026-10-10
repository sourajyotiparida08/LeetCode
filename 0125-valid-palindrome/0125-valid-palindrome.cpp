class Solution {
public:
bool isAlphaNumeric(char c){
    if(tolower(c) >= '0' && tolower(c) <= '9' || tolower(c) >= 'a' && tolower(c)<= 'z') return true;
    else return false;
}
    bool isPalindrome(string s) {
    int n = s.size();
    int st = 0, end = n-1;
    for(int i=0; i<n; i++){
        if(!isAlphaNumeric(s[st])){
            st++; continue;
        }
        if(!isAlphaNumeric(s[end])){
            end--; continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }
        else {
            st++;
            end--;
        }
    }
    return true;
    }
};