class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s= 0; // start
        int e = nums.size()-1;  // end 

        int mid = s + (e-s)/2;  // to avoid int overflow

        while( s <= e){
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }
        return s;
    }
};