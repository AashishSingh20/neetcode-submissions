int getPivot(vector<int>& nums, int n){
    int low = 0;
    int high = n-1;
    while(low < high){
        int mid = low+(high-low)/2;
        if(nums[mid] >= nums[0]){
            low = mid+1;
        }
        else{
            high = mid;
        }
    }
    return low;
}

int BinarySearch(vector<int>& nums, int low, int high, int target){

    while(low <= high){
        int mid = low+(high-low)/2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

class Solution {
public:
    int search(vector<int>& nums, int target) {
    int n = nums.size();

    int pivot = getPivot(nums, n);
        if(target >= nums[pivot] && target <= nums[n-1]){
            return BinarySearch(nums, pivot, n-1, target);
        }
        else{
            return BinarySearch(nums, 0, pivot-1, target);
        }   
    }
};
