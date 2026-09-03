class Solution {
public:
int findmax(vector<int> &v){
    int maxi =INT_MIN;
    for(auto it : v){
        maxi = max(maxi, it);
    }
    return maxi;
}
long long totalhrscnt(vector<int> &v, int hourly){
    int n = v.size();
    long long totalhrs = 0;
    for(int i=0; i<n; i++){
         totalhrs +=ceil((double)v[i]/(double)hourly); 
    }
    return totalhrs;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findmax(piles);
        int ans = INT_MAX;
        while(low<=high){
            int mid = (low+high)/2;
            long long totalhrs = totalhrscnt(piles, mid);
            if(totalhrs <= h){
                ans = min(mid, ans);
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};