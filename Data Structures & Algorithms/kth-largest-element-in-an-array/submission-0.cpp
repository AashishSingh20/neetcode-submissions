class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        int ans = -1;
        int i = n-1;
        while(k > 0){
            k--;
            i--;
        }
        ans = nums[i+1];
        return ans;
    }
};
