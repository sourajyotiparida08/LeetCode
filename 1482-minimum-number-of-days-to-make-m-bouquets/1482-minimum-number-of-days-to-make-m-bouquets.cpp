class Solution {
public:
bool isPossible(vector<int> &arr, int day, int m , int k){
    int cnt =0;
    int noOfB = 0;
    for(int i=0; i<arr.size(); i++){
        if(day >= arr[i]) cnt++;
        else{
            noOfB += cnt/k;
            cnt = 0;
        }
        
    }
    noOfB += cnt/k;
        if(noOfB >= m) return true;
        else return false;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = 1LL * m * k;
        if(val > bloomDay.size()) return -1;
        int low = INT_MAX, high = INT_MIN;
        for(int i=0;i<bloomDay.size(); i++){
            low = min(low, bloomDay[i]);
            high = max(high, bloomDay[i]);
        }
        int ans = 0;
        while(low<= high){
            int mid = (low + high) /2;
            if(isPossible(bloomDay, mid, m, k)){
                high= mid-1;
                ans = mid;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};