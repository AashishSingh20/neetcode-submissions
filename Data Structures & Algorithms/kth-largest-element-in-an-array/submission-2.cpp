class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        // Creates a min Heap
        priority_queue<int,vector<int>,greater<int>> pq;

        // push only first k numbers
        for(int i=0;i<k;i++){
            pq.push(nums[i]);
        }

        //Loop from k, if curr num is greater pop and insert new num
        for(int i=k;i<n;i++){
            if(nums[i] > pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }

        // Return top element as it's the kth largest
        return pq.top();
    }
};
