class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        int n = nums.size();
        unordered_map<int,int> mp;  // element,frequency
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        vector<vector<int>> buckets(n+1);
        for(auto& x: mp){
            buckets[x.second].push_back(x.first);  // 5 ki frequeny wali bucket mein pair ka element push kardo
        }

        vector<int> ans;
        for(int i=buckets.size()-1;i>0;i--){
            for(int j=0;j<buckets[i].size();j++){
                if(k>0){
                    ans.push_back(buckets[i][j]);
                    k--;
                }
                else{
                    return ans;
                }
            }
        }
        return ans;
    }
};
