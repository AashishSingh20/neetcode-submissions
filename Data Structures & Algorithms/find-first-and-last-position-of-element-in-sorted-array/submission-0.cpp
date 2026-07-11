int FirstOcc(vector<int>& nums, int n, int key){
        int low = 0;
        int high = nums.size()-1;
        int ans = -1;
        while(low<=high){
            int mid = (low+(high-low)/2);
            if(nums[mid] == key){
                ans = mid;
                high = mid-1;
            }
            else if(nums[mid] < key){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
}

int LastOcc(vector<int>& nums, int n, int key){
        int low = 0;
        int high = nums.size()-1;
        int ans = -1;
        while(low<=high){
            int mid = (low+(high-low)/2);
            if(nums[mid] == key){
                ans = mid;
                low = mid+1;
            }
            else if(nums[mid] < key){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = FirstOcc(nums, nums.size(), target);
        int last  = LastOcc(nums, nums.size(), target);
        return {first, last};
    }
};