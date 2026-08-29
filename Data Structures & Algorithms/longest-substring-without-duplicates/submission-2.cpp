class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> freq(128,0);  // All ASCII chracters fit in this size

        int maxLen = 0;
        int left = 0;
        for(int right=0;right<s.size();right++){
            freq[s[right]]++;

            while(freq[s[right]] > 1){
                freq[s[left]]--;
                left++;
            }
            maxLen = max(maxLen,right-left+1);
        }

        return maxLen;
    }
};
