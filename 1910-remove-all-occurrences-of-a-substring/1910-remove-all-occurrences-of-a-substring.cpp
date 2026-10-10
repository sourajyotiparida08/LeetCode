class Solution {
public:
    string removeOccurrences(string s, string part) {
      int n = s.size();
      while(s.find(part) < n){
        int start = s.find(part);
        int end = part.size();
        s.erase(start, end);
      }
      return s;
    }
};