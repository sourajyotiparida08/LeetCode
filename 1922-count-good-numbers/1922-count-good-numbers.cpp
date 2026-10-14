class Solution {
public:
long long MOD = 1e9 + 7;
long long powerGenerate(long long x, long long n){
    long long ans = 1;
    while(n>0){
    if(n % 2) {
        ans = (ans * x) % MOD;
        n -= 1;
    }
    else {
        x = (x * x) % MOD;
        n /= 2;
    }
    }
    return ans;
}
    int countGoodNumbers(long long n) {
        long long even = (n+1)/2;
        long long odd = n/2;

        long long a = powerGenerate(5,even);
        long long b = powerGenerate(4,odd);

        return (a*b) % MOD;
    }
};