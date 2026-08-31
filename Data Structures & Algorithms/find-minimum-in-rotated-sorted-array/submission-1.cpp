class Solution {
public:
    int findMin(vector<int> &nums) {
        
        int mini = nums[0];
        int low = 0;
        int high = nums.size()-1;

        while(low<high){
            int mid = low+(high-low)/2;
            if(nums[mid] > nums[high]){
                low = mid+1;
            }
            else if(nums[mid] > nums[low]){
                high = mid;
            }
            else{
                low++;
                high--;
            }

        mini = min(mini,min(nums[low],nums[high]));
        }

        return mini;
    }
};
