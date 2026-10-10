class Solution {
public:
bool isFreqSame(int freq1[], int freq2[]){
    for(int i=0; i<26;i++){
        if(freq1[i] != freq2[i]) return false;
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i=0; i<s1.size(); i++){
            freq[s1[i] - 'a']++;
        }
        int widSize = s1.size();
        for(int i=0; i<s2.size(); i++){
            int widIdx =0, Idx = i;
            int widFreq[26] = {0};
            while(widIdx < widSize && Idx < s2.size()){
                widFreq[s2[Idx] - 'a']++;
                widIdx++; Idx++;
            }
            if(isFreqSame(freq, widFreq)) return true;
        }
        return false;
    }
};