class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;

        int row = matrix.size();
        int col = matrix[0].size();

        int count =0;
        int total = row*col;

        // Index initialisation
        int startingrow = 0;
        int startingcol = 0;
        int endingrow = row - 1;
        int endingcol = col - 1;

        while(count < total){
            // print starting row
            for(int idx=startingcol; count < total && idx<=endingcol; idx++){
                ans.push_back(matrix[startingrow][idx]);
                count++;
            }
            startingrow++;

            // print ending column
            for(int idx = startingrow ; count < total && idx<=endingrow; idx++){
                ans.push_back(matrix[idx][endingcol]);
                count++;
            }
            endingcol--;

            // print endingrow
            for(int idx= endingcol; count < total && idx>=startingcol; idx--){
                ans.push_back(matrix[endingrow][idx]);
                count++;
            }
            endingrow--;

            // print startingcol
            for(int idx= endingrow; count < total && idx>=startingrow; idx--){
                ans.push_back(matrix[idx][startingcol]);
                count++;
            }
            startingcol++;
        }
        return ans;
    }
};