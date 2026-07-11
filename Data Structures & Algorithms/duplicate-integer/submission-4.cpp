class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool flag = false;
        int n = nums.size();
        for(int i=0;i<n;i++){
                if(nums[i] == nums[i+1]){
                return true;            
            }
        }
            return false;
    }  
};