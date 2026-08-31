class Solution {
public:
    int findMin(vector<int> &nums) {

        int low = 0;
        int high = nums.size()-1;

        while(low < high){
            int mid = low+(high-low)/2;
            // Agar mid bada hai high wale element se then smallest is in right
            if(nums[mid] > nums[high]){
                low = mid+1;
            }
            // Else smallest is in left
            else{
                high = mid;
            }
        }

        return nums[low];
    }
};
