class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){  // Loop till 3rd last element as last 2 would be the other elements
            if(i>0 && nums[i] == nums[i-1]){  // Agar nums[i] == nums[i-1] means i mein agar ek number aa gaya hai then woh phir nahi aanachahiye warna same elements aa sakte hai ans mein firse so ignore duplicate values of i
                continue;
            }
            int j = i+1;
            int k = n-1;

            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum == 0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;

                    while(j<k && nums[j] == nums[j-1]){ // Agar j<k and j ka element apne pehle wale element se same hai toh ignore current value of j
                        j++;
                    }
                    while(j<k && nums[k] == nums[k+1]){  // Agar j<k and k ka element apne baad wale element se same hai toh ignore current value of k(k is moving backwards)
                        k--;
                    }
                }
                else if(sum < 0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
    }
};
