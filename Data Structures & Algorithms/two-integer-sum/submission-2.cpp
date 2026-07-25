class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mp;

        // Store value -> index
        for(int i = 0;i<n;i++){
            mp[nums[i]] = i;  // For every number it's index will be it's key
        }

        for(int i=0;i<n;i++){
            int diff = target - nums[i];  // finds diff between target and curr element

            if(mp.find(diff) != mp.end() && mp[diff] != i){  // if diff is present in map then return index of current element and index of diff
                return {i, mp[diff]};
            }
        }
        return {};  // if nothing is found then return empty
    }
};