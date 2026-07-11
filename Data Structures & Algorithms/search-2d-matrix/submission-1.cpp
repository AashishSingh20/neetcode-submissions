class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int col_size = matrix[0].size();

        int start = 0;
        int end = matrix.size()*matrix[0].size() - 1;

        while(start <= end){
            int mid = start + (end-start)/2;  
            int element = matrix[mid/col_size][mid%col_size];  // This gets us the element at mid

            if(element == target){
                return 1;
            }

            else if(element < target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return 0;
    }
};
