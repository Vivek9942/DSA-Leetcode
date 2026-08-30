class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(); // No. of rows
        int col = matrix[0].size(); // No. of columns 

        int st=0;
        int end = row*col -1;
        int mid = st + (end-st)/2;

        while(st <= end){
            int element = matrix[mid/col][mid%col];

            if(element == target){
                return 1;
            }
            else if(element < target){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = st + (end-st)/2;
        }
        return 0;
    }
};