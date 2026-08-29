class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefix(n,1);
        // product is used to store product of previous elements before current
        // element
        int product = 1; 
        for(int i=0;i<n;i++){
            prefix[i] = product;
            product *= nums[i];
        }

        int product2 = 1;
        for(int i=n-1;i>=0;i--){
            prefix[i] *= product2;
            product2 *= nums[i];
        }

        return prefix;
    }
};
