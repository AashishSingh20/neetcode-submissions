class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        // Creates a min Heap
        priority_queue<int,vector<int>,greater<int>> pq;

        for(int num : nums){
            pq.push(num);
            
            // Agar pq ki size k se jada ho gayi then pop top element
            // Yeh heap ki size k se jada nahi hone dega
            if(pq.size() > k){
                pq.pop();
            }
        }

        // Return top element as it's the kth largest
        return pq.top();
    }
};
