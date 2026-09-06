class Solution {
public:
int ReqDays(vector<int> &weights, int cap){
    int days = 1, load = 0; 
    for(int i =0; i<weights.size(); i++){
        if(load + weights[i] > cap){
            days++;
            load = weights[i];
        }
        else{
            load += weights[i];
        }
    }
    return days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0, high = 0;
        for(int i= 0; i<weights.size(); i++){
            low = max(low, weights[i]);
            high += weights[i];
        }
        while(low<=high){
            int mid = (low+high)/2;
            int reqdays = ReqDays(weights, mid);
            if(reqdays<=days){
                high = mid-1;
            }
            else low = mid+1;
        }
        return low;
    }
};