class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         vector<vector<int>>ans;
         sort(nums.begin(), nums.end());
         int n= nums.size();
         for(int i=0;i<n;i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            for(int j=i+1; j<n;){
                int p= j+1;
                int q = n-1;

                while(p < q){
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q];

                    if(sum < target) p++;
                    else if(sum> target) q--;
                    else {
                        ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                        p++;
                        q--;

                        while(p < q && nums[p] == nums[p-1]) p++;
                    }
                }
                j++;
                while(j<n && nums[j] == nums[j-1]) j++;
            }
         }
         return ans;
    }
};