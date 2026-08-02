class Solution {
private:
    static bool comparator(const pair<int,int>& a, const pair<int,int>& b){  // Agar a ka second element is greater then b then return true
        return a.second>b.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;  // element,frequency

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        vector<pair<int,int>> pairs;
        for(auto& x: mp){
            pairs.push_back(x);
        }

        sort(pairs.begin(),pairs.end(),comparator);

        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(pairs[i].first);
        }

        return ans;
    }
};
