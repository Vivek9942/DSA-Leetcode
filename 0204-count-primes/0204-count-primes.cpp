class Solution {
public:
    int countPrimes(int n) {
        if(n < 3) return 0;

        vector<char>iscomposite(n, 0);
        int cnt =1;

        for(int i=3; i<n; i+=2){
            if(!iscomposite[i]){
                cnt++;

                for(long j=(long)i*i; j < n; j += 2*i){
                    iscomposite[j] = 1;
                }
            }
        }
        return cnt;
    }
};