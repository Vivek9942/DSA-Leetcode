class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int sum = (n* (n+1))/2;
        int currentsum =0;

        for(int i=0; i<n; i++){
            currentsum += nums[i];
        }
        return sum - currentsum;
    }
};